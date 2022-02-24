#include <cstring>
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
char* Sort()
{
    char Spade [12][5] = {"2","3","5","7","A","K","J","Q","4","6","10","9"};
    char Diamond [12][5] = {"2","3","5","7","A","K","J","Q","4","8","10","9"};
    char Club [12][5] = {"2","3","5","7","A","K","J","Q","4","6","8","10"};
    char Heart [12][5] = {"2","3","5","7","A","K","J","Q","4","6","8","9"};
    char SortedCards[48] = {};
    int sordedcount = 0;
    //spade cards
    int flag = 2;
    int flagcard = 0;
    for(int i=0;i<12; i++)
	{    
        char cardToCheck = '2';
        if(flag < 11) 
           cardToCheck = flag;
        else{
           switch (flagcard)
           {
            case 0:
                cardToCheck = 'J';
                break;
            case 1:
                cardToCheck = 'Q';
                break;
            case 2:
                cardToCheck = 'K';
                break;
            case 3:
                cardToCheck = 'A';
                break;
           }
           flagcard = flagcard + 1;
        }
        for(int j=0;j<12;j++)
		{
        	for(int k=0;k<2;k++)
			{
            if(Spade[j][k] == cardToCheck)
			{
                SortedCards[sordedcount] = Spade[j][k];
                sordedcount++;
                if(flag < 11) flag = flag + 1;
                break;
            }
        }
		}
    }
    //club cards
    flag = 2;
    flagcard = 0;
    for(int i=0;i<12; i++)
	{    
        char cardToCheck = '2';
        if(flag < 11) 
           cardToCheck = flag;
        else{
           switch (flagcard)
           {
            case 0:
                cardToCheck = 'J';
                break;
            case 1:
                cardToCheck = 'Q';
                break;
            case 2:
                cardToCheck = 'K';
                break;
            case 3:
                cardToCheck = 'A';
                break;
           }
           flagcard = flagcard + 1;
        }
        for(int j=0;j<12;j++)
		{
        for(int k=0;k<2;k++)
		{
            if(Club[j][k] == cardToCheck)
			{
                SortedCards[sordedcount] = Club[j][k];
                sordedcount++;
                if(flag < 11) flag = flag + 1;
                break;
            }
        }
    }
	}
    //heart cards
    flag = 2;
    flagcard = 0;
    for(int i=0;i<12; i++)
	{    
        char cardToCheck = '2';
        if(flag < 11) 
           cardToCheck = flag;
        else{
           switch (flagcard)
           {
            case 0:
                cardToCheck = 'J';
                break;
            case 1:
                cardToCheck = 'Q';
                break;
            case 2:
                cardToCheck = 'K';
                break;
            case 3:
                cardToCheck = 'A';
                break;
           }
           flagcard = flagcard + 1;
        }
        for(int j=0;j<12;j++)
		{
        for(int k=0;k<2;k++)
		{
            if(Heart[j][k] == cardToCheck)
			{
                SortedCards[sordedcount] = Heart[j][k];
                sordedcount++;
                if(flag < 11) flag = flag + 1;
                break;
            }
        }
    }
	}
    //diamond cards
    flag = 2;
    flagcard = 0;
    for(int i=0;i<12; i++)
	{    
        char cardToCheck = '2';
        if(flag < 11) 
           cardToCheck = flag;
        else{
           switch (flagcard)
           {
            case 0:
                cardToCheck = 'J';
                break;
            case 1:
                cardToCheck = 'Q';
                break;
            case 2:
                cardToCheck = 'K';
                break;
            case 3:
                cardToCheck = 'A';
                break;
           }
           flagcard = flagcard + 1;
        }
        for(int j=0;j<12;j++)
		{
        	for(int k=0;k<2;k++)
			{
            if(Diamond[j][k] == cardToCheck)
			{
                SortedCards[sordedcount] = Diamond[j][k];
                sordedcount++;
                if(flag < 11) flag = flag + 1;
                break;
            }
        }
    }
}
   return SortedCards;    
}
char* findMissing(char *sortedcards)
{
    char MissingCards[4] = {};
    int flag= 2;
    int flagcard = 0;
    for(int i =0; i< 12; i++)
	{   
            char cardToCheck = '0';
        if(flag < 11) cardToCheck = flag;
        else{
           switch (flagcard)
           {
            case 0:
                cardToCheck = 'J';
                break;
            case 1:
                cardToCheck = 'Q';
                break;
            case 2:
                cardToCheck = 'K';
                break;
            case 3:
                cardToCheck = 'A';
                break;
           }
           flagcard = flagcard + 1;
            if(sortedcards[i] != cardToCheck) MissingCards[0] = sortedcards[i];
        }
    }
    flag= 2;
    flagcard = 0;
    for(int i =12; i< 24; i++)
	{   
        char cardToCheck = '0';
        if(flag < 11) cardToCheck = flag;
        else{
           switch (flagcard)
           {
            case 0:
                cardToCheck = 'J';
                break;
            case 1:
                cardToCheck = 'Q';
                break;
            case 2:
                cardToCheck = 'K';
                break;
            case 3:
                cardToCheck = 'A';
                break;
           }
           flagcard = flagcard + 1;
            if(sortedcards[i] != cardToCheck) MissingCards[0] = sortedcards[i];
        }
    }
    flag= 2;
    flagcard = 0;
    for(int i =12; i< 24; i++)
	{  
        char cardToCheck = '0';
        if(flag < 11) cardToCheck = flag;
        else{
           switch (flagcard)
           {
            case 0:
                cardToCheck = 'J';
                break;
            case 1:
                cardToCheck = 'Q';
                break;
            case 2:
                cardToCheck = 'K';
                break;
            case 3:
                cardToCheck = 'A';
                break;
           }
           flagcard = flagcard + 1;
            if(sortedcards[i] != cardToCheck) MissingCards[0] = sortedcards[i];
        }
    }
    flag= 2;
    flagcard = 0;
    for(int i =12; i< 24; i++)
	{  
            char cardToCheck = '0';
            if(flag < 11) 
			cardToCheck = flag;
            else{
           switch (flagcard)
           {
            case 0:
                cardToCheck = 'J';
                break;
            case 1:
                cardToCheck = 'Q';
                break;
            case 2:
                cardToCheck = 'K';
                break;
            case 3:
                cardToCheck = 'A';
                break;
           }
           flagcard = flagcard + 1;
            if(sortedcards[i] != cardToCheck) MissingCards[0] = sortedcards[i];
        }
    }
    return MissingCards;
}
void displayCards()
{
    char cardsToDisplay[48] = {};
    strcpy(cardsToDisplay,Sort());
    int ct[48];
    for (int l=0;l<48;l++){
    	ct[l]=l+1;
	}
	cout<<"Unsorted cards"<<endl;
    for(int i = 0; i<48; i++){
        if(i < 12) 
		cout << "Card" << ct[i] << ": Spade "<< (rand() % 10) + 1 << endl;
		//continue;
        else if(i < 24) 
		cout << "Card" << ct[i] << ": Club "<< (rand() % 12) + 1 << endl;
		//continue;
        else if(i < 36)
		cout << "Card" << ct[i] << ": Heart "<< (rand() % 10) + 1 << endl;
		//continue;
		else if(i < 48) 
		cout << "Card" << ct[i] << ": Diamond "<< (rand() % 12) + 1 << endl;
		//continue;
	}
    cout<<"\n\n";
    //Sorted Cards
    cout<<"Sorted Cards"<<endl;
    for(int m = 0; m<12; m++){
		cout << "Card" << ct[m] << ": Spade "<< ct[m] << endl;}
		int cc=12;
		for(int r=0;r<12;r++){
		cout << "Card" << ct[cc] << ": Club "<< ct[r] << endl;
		cc++;
	}
	cc=24;
	for(int o=0;o<12;o++){
		cout << "Card" << ct[cc] << ": Heart "<< ct[o] << endl;
		cc++;
		}
	cc=36;	
	for(int u=0;u<12;u++){
		cout << "Card" << ct[cc] << ": Diamond "<< ct[u] << endl;
		cc++;
		}
		//continue;
//	}
cout<<"\n\n";
    char MissingCards[4] = {};
    strcpy(MissingCards,findMissing(cardsToDisplay));
    cout << "Missing Cards Of 20-Arid-504" << endl;
    for(int i=0 ; i <4; i++){
        switch (i)
        {
        case 0:
            cout << "Card" << i+1 << ": Spade "<< (rand() % 12) + 1 << endl;
            break;
        case 1:
            cout << "Card" << i+1 << ": Club "<< (rand() % 10) + 1 << endl;
            break;
        case 2:
            cout << "Card" << i+1 << ": Heart "<< (rand() % 10) + 1 << endl;
            break;
        case 3:
            cout << "Card" << i+1 << ": Diamond "<< (rand() % 10) + 1 << endl;
            break;
        }
    }
}
int main()
{
	Sort();
	displayCards();
	return 0;
}
