#include<iostream>
#include<vector>

using namespace std;

template<typename T>
bool isEqual(std::vector<T> const &v1, std::vector<T> const &v2)
{
    return (v1.size() == v2.size() && std::equal(v1.begin(), v1.end(), v2.begin()));
}


void cmp(){
	vector<int> a = {1, 2, 3, 4};
	vector<int> b = {4, 2, 3, 1};
	bool r = isEqual(a, b);
	cout<<r<<endl;
}

int main(){
	cmp();
}