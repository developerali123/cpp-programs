#include<iostream>
using namespace std;
int main()
{
    char A[30];
    int vowels=0,consonants=0;
    cout<<"Enter a line of string=";
    cin.getline(A,30);
    for(int i=0;A[i]!='\0';++i)
    {
        if(A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u'||A[i]=='A'||A[i]=='E'||A[i]=='I'||A[i]=='O'||A[i]=='U')
        {
            ++vowels;
        }
        else if((A[i]>='a'&&A[i]<='z')||(A[i]>='A'&&A[i]<='Z'))
        {
            ++consonants;
        }
    }
    cout<<"Vowels="<<vowels<<endl;
    cout<<"Consonants="<<consonants<<endl;
    return 0;
}
