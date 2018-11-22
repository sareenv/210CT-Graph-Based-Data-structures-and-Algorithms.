#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

map<int, int> check(){
	std::map<int, int> hello;
	hello = {
		{12, 2}, 
		{13, 3},
		{14, 4},
		{15, 5}
	};
	return hello;
}

// maps always stores the pair and 

void find(int key){
	auto mymap = check();
	auto a = mymap.find(key);
	if(a == mymap.end()){
		cout<<"Key is not present here"<<endl;
	}else{
		cout<< a->second<<endl;
	}
	return;
}


int main(){
	vector<int> a = {1, 2, 3};
	vector<int> b = {3, 2, 1};

	if(a == b){
		cout<<"Same elements "<<endl;
	}else{
		cout<<"Not same elements "<<endl;
	}


	return 0;
}
