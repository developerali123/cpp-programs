#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
//	string ali="Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean porttitor tincidunt lorem, id scelerisque lectus tempus vitae. Nulla gravida tortor ligula, id venenatis dui aliquet ac. Aenean tempus lacus diam, a vehicula dui dignissim ac. Donec at maximus nunc. Curabitur tristique vitae felis nec placerat. Curabitur vitae eros ut velit porta gravida quis et lorem. Maecenas eleifend ipsum leo. Vestibulum egestas porttitor lectus congue consectetur. Maecenas pharetra ultrices sollicitudin. Aliquam ligula lacus, auctor eu cursus et, porttitor et diam. Cras convallis enim ante, ut gravida neque pulvinar eu. Donec justo neque, facilisis quis urna in, tincidunt viverra enim. Nulla elementum odio ac ante sodales, condimentum fermentum arcu ultrices. Morbi non malesuada magna. Phasellus sodales suscipit fermentum. Vestibulum eu sapien luctus, pellentesque nisl in, rhoncus velit\n.";
//ofstream aout;
//aout.open("ali51.txt");
//aout<<ali;
//aout.close();
string ali1;
ifstream ain;
ain.open("ali51.txt");
while(ain.eof()==0){
	getline(ain,ali1);
	cout<<ali1<<"\n";
}
ain.close();
return 0;
}
