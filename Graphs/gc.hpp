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
	void insertVertices(int data, int id);
	void addEdge(int id, int source, int destination);
	void printingElements(int id);
	bool isConnected();
};

#endif