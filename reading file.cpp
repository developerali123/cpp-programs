#include<iostream>
#include<fstream>
using namespace std;
int main(){
string ali;
ifstream in("ali50.txt");
//in>>ali;
getline(in,ali);
cout<<ali;
return 0;
}
