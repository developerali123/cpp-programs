#include<iostream>
#include<string>
#include<map>
#include<fstream>
#include<ctype.h>
#include<algorithm>
using namespace std;
struct Card{
    int value;
    string category;
};
Card cards[52];
map<int, string> cardFace;
void initMap(){
    for(int i = 1; i <= 13; ++i){
        if(i >= 1 && i < 10)
            cardFace[i] = to_string(i+1);
        
        else{
            if(i == 10)
                cardFace[i] = "J";
            else if(i == 11)
                cardFace[i] = "Q";
            else if(i == 12)
                cardFace[i] = "K";
            else if(i == 13)
                cardFace[i] = "A";
        }
    }
}
void initCards(){
    
    int k = 0;
    for(int i = 1; i <= 13; ++i){
        Card card;
        card.value = i;
        card.category = "Spade";
        cards[k++] = card;
    }
    for(int i = 1; i <= 13; ++i){
        Card card;
        card.value = i;
        card.category = "Spade";
        cards[k++] = card;
    }
    for(int i = 1; i <= 13; ++i){
        Card card;
        card.value = i;
        card.category = "Spade";
        cards[k++] = card;
    }
    for(int i = 1; i <= 13; ++i){
        Card card;
        card.value = i;
        card.category = "Spade";
        cards[k++] = card;
    }
}
bool comparator(Card card1, Card card2){
    return card1.value < card2.value;
}
bool hasCard(Card card){
        string category = card.category;
        int value = card.value;
        
        for(auto val: cards)
                if(val.value == value && category.compare(val.category))
                        return true;
                        
        return false;
}
/*
 * Sorts down the cards array
 */
void sortCards(Card randomCards[]){
    int size = 48;
    Card spadeCards[13], clubCards[13], heartCards[13], diamondCards[13];
    int j = 0, k = 0, l = 0, m = 0;
    for(int i = 0; i < size; ++i)
    {
        Card card = randomCards[i];
        
        if(card.category == "Spade")
            spadeCards[j++] = card;
        
        else if(card.category == "Club")
            clubCards[k++] = card;
        else if(card.category == "Heart")
            heartCards[l++] = card;
        
        else if(card.category == "Diamond")
            diamondCards[m++] = card;
    }
    sort(spadeCards, spadeCards + j, comparator);
    sort(clubCards, clubCards + k, comparator);
    sort(heartCards, heartCards + l, comparator);
    sort(diamondCards, diamondCards + m, comparator);
    int n = 0;
    for(auto val: spadeCards) randomCards[n++] = val;
    for(auto val: clubCards) randomCards[n++] = val;
    for(auto val: heartCards) randomCards[n++] = val;
    for(auto val: diamondCards) randomCards[n++] = val;
}
void displayCards(Card sortedCards[]){
    int n = 48;
    for(int i = 1; i <= n; ++i)
        cout<<"Card"<<to_string(i)<<": "<<sortedCards[i-1].category<<" "<<cardFace[sortedCards[i-1].value]<<"\n";
}
void findMissing(Card randomCards[]){
    cout<<"The Missing Cards of 19-Arid-arid no:\n";
    sortCards(randomCards);
    int a = 1;
    for(int i = 0; i < 48; ++i){
        if(!hasCard(randomCards[i]))
            cout<<"Card"<<to_string(a)<<": "<<randomCards[i].category<<" "<<cardFace[randomCards[i-1].value]<<"\n";
    }
}
/*
* Uses File handling to read and write data
*/
void findMissingFromFile(){
    ofstream fout;
    ifstream fin;
    string line;
    Card randomCards[48];
    int i = 0;
    fin.open("19_Arid_arid no.txt");
    
    while(fin){
        getline(fin, line);
        Card card;
        if(line.find("Spade") != string::npos) card.category = "Spade";
        else if(line.find("Spade") != string::npos) card.category = "Club";
        else if(line.find("Spade") != string::npos) card.category = "Heart";
        else if(line.find("Spade") != string::npos) card.category = "Diamond";
        if(isdigit(line.at(line.size()-1))){
            if(line.find("0") != string::npos) card.value = 9;
            else card.value = stoi(line.substr(line.size()- 1)) - 1;
        }
        else{
            if(line.substr(line.size()-1) == "J") card.value = 10;
            else if(line.substr(line.size()-1) == "Q") card.value = 11;
            else if(line.substr(line.size()-1) == "K") card.value = 12;
            else if(line.substr(line.size()-1) == "A") card.value = 13;
        }
        randomCards[i++] = card;
    }
    fout.open("missingCards.txt");
    sortCards(randomCards);
    int a = 1;
    for(int i = 0; i < 48; ++i){
        if(!hasCard(randomCards[i]))
            fout<<"Card"<<to_string(a)<<": "<<randomCards[i].category<<" "<<cardFace[randomCards[i-1].value]<<"\n";
    }
    fin.close();
    fout.close();
}
int getKeyByValue(string s){
        for(auto val: cardFace)
                if(s.compare(val.second))
                        return val.first;
                        
        return 0;
}
int main(){
    initMap();
    initCards();
        int k = 0;
    Card playerCards[48];
        string num;
    for(int i = 0; i < 12; ++i){
        cout<<"\nEnter Card Number for Spade: ";
        cin>>num;
        Card card;
        card.category = "Spade";
        card.value = getKeyByValue(num);
        playerCards[k++] = card;
        }
        for(int i = 0; i < 12; ++i){
        cout<<"\nEnter Card Number for Club: ";
        cin>>num;
        Card card;
        card.category = "Club";
        card.value = getKeyByValue(num);
        playerCards[k++] = card;
        }
        
        for(int i = 0; i < 12; ++i){
        cout<<"\nEnter Card Number for Heart: ";
        cin>>num;
        Card card;
        card.category = "Heart";
        card.value = getKeyByValue(num);
        playerCards[k++] = card;
        }
        
        for(int i = 0; i < 12; ++i){
        cout<<"\nEnter Card Number for Diamond: ";
        cin>>num;
        Card card;
        card.category = "Diamond";
        card.value = getKeyByValue(num);
        playerCards[k++] = card;
        }
        
    displayCards(playerCards);
    findMissing(playerCards);
    sortCards(playerCards);
    displayCards(playerCards);
    return 0; 
}
