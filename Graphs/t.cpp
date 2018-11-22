#include<iostream>
#include<vector>

using namespace std;

void cmp(){
	vector<int> v1 = {1, 2, 3, 4};
	vector<int> v2 = {1, 3, 2, 4};
	
	bool a = is_permutation(v1.begin(), v1.end(), v2.begin());
	(a == 1)?  cout<<"True"<<endl : cout<<"False"<<endl;
}

int main(){
	cmp();
}