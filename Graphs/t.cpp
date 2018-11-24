#include<iostream>
#include<vector>
#include<queue>

using namespace std;


void q(){
	queue<int> mq;
	mq.push(12);
	mq.push(13);
	mq.push(14);
	mq.push(15);

	mq.pop();
	cout<<mq.front()<<endl;
	mq.pop();
	cout<<mq.front()<<endl;
	mq.pop();
	cout<<mq.front()<<endl;
}


int main(){
	q();
	return 0;
}
