#include<iostream>
#include<fstream>
using namespace std;

int main(){
	fstream file;
	file.open("hello.txt");
	for(int i = 0; i< 10; i++){
		file << "How this is what you call style 😎"<<endl;
	}
	file.close();
	cout<<"Done printing in the file "<<endl;
	return 0;
}