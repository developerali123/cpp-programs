#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int ch,r1,c1,AD2[2][2],C2[2][2],AD3[3][3],C3[3][3];
    cout<<"Find adjoint of :- \n1. 2x2 matrix \n2. 3x3 matrix \n>";
	cin>>ch;
    if (ch==1) //if user want to find the adjoint of matrix of order 2x2
    {
        cout<<"enter number of rows";
        cin>>r1;
        cout<<"enter number of columns";
        cin>>c1;
        int* *A2=new int*[r1];
        for(int i=0;i<r1;i++)
        A2[i]=new int[c1];
		cout<<"Enter elements of A matrix: \n";
        for (int i=0; i<r1; i++)//loop for entering elements of matrix A of order 2x2.
        {
            for (int j=0; j<c1; j++)
            {
                cout<<"A["<<i+1<<"]["<<j+1<<"] : "; 
				cin>>A2[i][j];
            }
        }
        //Calculating cofactors of a matrix of order 2x2
        C2[0][0]=A2[1][1]; 
		C2[0][1]=-A2[1][0]; 
		C2[1][0]=-A2[0][1]; 
		C2[1][1]=A2[0][0];
		//calculating adjoint of the matrix of order 2x2
        AD2[0][0]=C2[0][0];
		AD2[0][1]=C2[1][0];
		AD2[1][0]=C2[0][1]; 
		AD2[1][1]=C2[1][1];
        cout<<"\n\nAdjoint of A is :- \n\n";//printing values of adjoint A of order 2x2.
        cout<<"|\t"<<AD2[0][0]<<"\t"<<AD2[0][1]<<"\t|\n|\t"<<AD2[1][0]<<"\t"<<AD2[1][1]<<"\t|\n";
    }
    else if (ch==2) //if user wants to calculate the adjoint of a matrix of order 3x3
    {
        cout<<"enter number of rows";
        cin>>r1;
        cout<<"enter number of columns";
        cin>>c1;
        int* *A3=new int*[r1];
        for(int i=0;i<r1;i++)
        A3[i]=new int[c1];
		cout<<"Enter elements of A matrix: \n";
        for (int i=0; i<r1; i++)//loop for entering elements of matrix A of order 3x3.
        {
            for(int j=0; j<c1; j++)
            {
                cout<<"A["<<i+1<<"]["<<j+1<<"] : "; 
				cin>>A3[i][j];
            }
        }
//calculating cofactors of matrix A of order 3x3
        C3[0][0]=((A3[1][1]*A3[2][2])-(A3[2][1]*A3[1][2])); 
		C3[0][1]=-((A3[1][0]*A3[2][2])-(A3[2][0]*A3[1][2]));
        C3[0][2]=((A3[1][0]*A3[2][1])-(A3[2][0]*A3[1][1]));
        C3[1][0]=-((A3[0][1]*A3[2][2])-(A3[2][1]*A3[0][2])); 
		C3[1][1]=((A3[0][0]*A3[2][2])-(A3[2][0]*A3[0][2])); 
		C3[1][2]=-((A3[0][0]*A3[2][1])-(A3[2][0]*A3[0][1]));
        C3[2][0]=((A3[0][1]*A3[1][2])-(A3[1][1]*A3[0][2])); 
		C3[2][1]=-((A3[0][0]*A3[1][2])-(A3[1][0]*A3[0][2]));
        C3[2][2]=((A3[0][0]*A3[1][1])-(A3[1][0]*A3[0][1]));
// calculating adjoint of matrix A of order 3x3
        AD3[0][0]=C3[0][0]; 
		AD3[0][1]=C3[1][0]; 
		AD3[0][2]=C3[2][0];
        AD3[1][0]=C3[0][1]; 
		AD3[1][1]=C3[1][1]; 
		AD3[1][2]=C3[2][1];
        AD3[2][0]=C3[0][2]; 
		AD3[2][1]=C3[1][2]; 
		AD3[2][2]=C3[2][2];
        cout<<"Adjoint A is:-\n\n";//printing values of adjoint A of order 3x3.
        cout<<"|\t"<<AD3[0][0]<<"\t"<<AD3[0][1]<<"\t"<<AD3[0][2]<<"\t|\n"<<"|\t"<<AD3[1][0]<<"\t"<<AD3[1][1]<<"\t"<<AD3[1][2]<<"\t|\n"<<"|\t"<<AD3[2][0]<<"\t"<<AD3[2][1]<<"\t"<<AD3[2][2]<<"\t|\n";
    }
    else 
	cout<<"No such choice exist ...... "<<endl;  //if the user enters another key other than 1 and 2.
    return 0;

}
