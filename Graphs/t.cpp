#include<iostream>
#include<fstream>
#include<queue>
using namespace std;

// int main(){
// 	fstream file;
// 	file.open("hello.txt");
// 	for(int i = 0; i< 10; i++){
// 		file << "How this is what you call style 😎"<<endl;
// 	}
// 	file.close();
// 	cout<<"Done printing in the file "<<endl;
// 	return 0;
// }


void q(){
	queue<int> myqueue;
	myqueue.push(1);
	myqueue.push(12);
	myqueue.push(41);
	myqueue.push(11);
	myqueue.push(15);

	cout<<myqueue.front()<<endl;
	myqueue.pop();
	cout<<myqueue.front()<<endl;

	myqueue.pop();
	cout<<myqueue.front()<<endl;
	
	myqueue.pop();
	cout<<myqueue.front()<<endl;

	myqueue.pop();
	cout<<myqueue.front()<<endl;

	myqueue.pop();


}




int main(){
	q();
	return 0;
}