#include<iostream>
using namespace std;
int count_and(char * A, char * toSearch)
{
    int i, j, found, count;
    int stringLen, searchLen;

    int cou = 0;
    while(A[cou] != '\0'){
        cou++;
    }
    stringLen = cou; 
    cou = 0;  
    while(toSearch[cou] != '\0'){
        cou++;
    }
    searchLen = cou; 

    count = 0;

    for(i=0; i <= stringLen-searchLen; i++)
    {

        found = 1;
        for(j=0; j<searchLen; j++)
        {
            if(A[i + j] != toSearch[j])
            {
                found = 0;
                break;
            }
        }

        if(found == 1)
        {
            count++;
        }
    }

    return count;
}
void count_words(char A[])
	{
	int i=0,count=0;
	while(A[i]!='\0')
	{
		if(A[i]==' ')
		count++;
		i++;
	}
	cout<<"number of words in this paragraph is:\t"<<count+1<<endl;
   }
   void total_sentences(char A[])
   {
   	int i=0,sentence=0;
	while(A[i]!='\0')
	{
		if(A[i]=='.'||A[i]=='!'||A[i]=='?')
		sentence++;
		i++;
	}
	cout<<"\n\nnumber of sentences in this paragraph is:\t"<<sentence<<endl;
   }
   void lower_case(char A[])
{
	int i=0,j=0;
	char C;
	cout<<"\n\nenter character=";
	cin>>C;
	while(A[i]!='\0')
	{
		if(A[i]==C)
		{
		j++;
	}
	i++;
	}
	cout<<"My name is muhammad ali mirza\n";
	cout<<"starting letter of your name repeated "<<j<<" times"<<endl;
}
void upper_case(char A[])
{
	int i=0,j=0;
	char C;
	cout<<"\n\nenter character=";
	cin>>C;
	while(A[i]!='\0')
	{
		if(A[i]==C)
		{
		j++;
	}
	i++;
	}
	cout<<"My name is muhammad ali mirza\n";
	cout<<"starting letter of your name repeated "<<j<<" times"<<endl;
}

int main()
{
	char A[1000]={"Most of the software failed due to fuzzy and incompatible requirements. Software requirements are baseline of any system. A flourishing system will be delivered on the basis of precise and valuable requirement gathering. Software requirement classifiers are used to remove the vagueness from elicited requirements. Two processes were discussed to classify the requirements. Heavy classification and Light classification. For heavy classification, Naive Bayes (NB) technique has been used and for light classification Euclidean distance (ED) measures have been used. These two approaches are used to aid effectiveness in managing the requirement specification. Selected dataset was not relevant to research domain and its size is small to estimate the accuracy of suggested methods."};
	int c=count_and(A,"and");
	cout<<"Frequency of the word \''and\'' in string: "<<c<<endl<<endl;
	count_words(A);
	total_sentences(A);
	lower_case(A);
	upper_case(A);
	return 0;
} 

