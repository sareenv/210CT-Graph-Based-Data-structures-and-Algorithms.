#include <iostream>
#include <vector>
using namespace std;

void mdArray(){
	// 3*3 array 
	int a[3][3] = {
			{1,2,3},
			{4,5,6},
			{7,8,9}
	};

	for(int i = 0; i< 3; i++){
		cout<<a[i][i]<<endl;
	}
}

void mdVector(){
	vector<vector<int>> a;
	cout<<"This is printing of multidemensional vector"<<endl;
	a = {

		{1,8,3},
		{4,5,6},
		{7,8,9}
	};

	for(int i = 0; i< 3; i++){
		cout<<a[i][i]<<endl;
	}

}

int main(int argc, char const *argv[])
{
	mdVector();
	return 0;
}
