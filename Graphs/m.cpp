#include<iostream>
#include<string>
#include<map>
#include<vector>
using namespace std;

int main(){
	std::map<int, vector<int>> link;
	
	// Inserting to the dictionary in c++. 
	// Some problems are there is such approach.

	link.insert(pair<int, vector<int>>(5, {6, 70, 28, 9}));
	link.insert(pair<int, vector<int>>(6, {9, 71, 83, 29}));
	link.insert(pair<int, vector<int>>(7, {10, 11, 38, 39}));
	link.insert(pair<int, vector<int>>(8, {18, 27, 28, 9}));
	link.insert(pair<int, vector<int>>(9, {16, 73, 18, 19}));

	// Printing Time complexity can also be the problem but lets see.
	for(auto i = link.begin(); i!= link.end(); ++i){
		cout<<i->second[0]<<endl;
	}


	return 0;
}