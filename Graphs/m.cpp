#include<iostream>
#include<map>
#include <string>
using namespace std;

void mapper(){
	std::map<int, string> mapy = {
		{1, "f"},
		{2, "s"},
	};
	auto r = mapy.find(1);
	cout<<r->second<<endl;
	return;
}

int main(int argc, char const *argv[])
{	
	mapper();
	return 0;
}
