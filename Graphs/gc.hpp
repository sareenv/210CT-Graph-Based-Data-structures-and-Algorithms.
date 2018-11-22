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
	vector<int> nodesVector;
	std::map<int, vector<int>> adjancylist;
public:
	void insertVertices(int nodeData);
	void addEdge(int source, vector<int> dest);
	void printingElements(int nodeData);
	bool isConnected();
	bool nodeCheck(int nodeData);
	void printNodesDataSet(int nodeData);
};

#endif
