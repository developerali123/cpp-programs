#include<iostream>
using namespace std;
int main ()
{
    int r1,c1;
	bool b=0;
    cout<<"Enter number of rows:";
    cin>>r1;
    cout<<"Enter number of columns:";
    cin>>c1;
    int* *A=new int*[r1];
    for(int i=0;i<r1;i++)
    A[i]=new int[c1];
    if(r1!=c1)
    {
        cout <<"Matrix is not a square matrix!";
    }
    else if(r1==c1)
    {
    cout << "Enter array elements : ";
    for (int i=0;i<r1;i++)
        for (int j=0;j<c1;j++)    
            cin>>A[i][j];
    for ( int i=0;i<r1;i++)
        for (int j=0;j<c1;j++)
        {
            if(A[i][j]!=1&&A[j][i]!=0)
            {
                b=1;
                break;
            }
        }
    if (b==0)
        cout<<"The given array is an identity matrix.\n ";
    else
        cout<<"The given array is not an identity matrix.\n ";
    for (int i=0;i<r1;i++)
    {
        for (int j=0; j<c1; j++)	
            cout << A[i][j] << " ";
        cout << "\n ";
    }
}
    return 0;
}
