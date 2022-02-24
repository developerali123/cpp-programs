#include<iostream>
using namespace std;
int main()
{
    char A[20];
    int count=0;
    cout<<"Please enter the string=";
    cin.getline(A,20);
    for( int i=0;A[i]!='\0';i++)
	{
        if(A[i]!=' ')// this condition is used to avoid counting space
        {
            count++;
        }
    }
    cout<<"The total characters of the given string= "<<count;
    return 0;
}
