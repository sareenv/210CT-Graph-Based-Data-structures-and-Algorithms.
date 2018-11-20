#ifndef GCON
#define GCON
#include<iostream>
#include<map>
#include<vector>
using namespace std;

struct Node{
	int data;
	int id;
};

typedef Node* nodeptr;

class Graph{
private:
	int a = 0;
	std::map<int, vector<int>> adjancylist;
public:
	void insertVertices(int data);
	void printingElements(int source, int destination);
};

#endif