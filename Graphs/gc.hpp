#ifndef GCON
#define GCON
#include<iostream>
#include<map>
#include<vector>
#include<fstream>
#include<queue>
#include<string>
#include<algorithm>
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
	vector<int> visitedNodes;
public:
	Graph();
	void insertVertices(int nodeData);
	void addEdge(int source, vector<int> dest);
	void printingGraph();
	bool isConnected(int source);
	bool nodeCheck(int nodeData);
    bool checkVisited(int node);
	vector<int> neighbourElements(int node);
	vector<int> dfs(int src); 
	void bfs(int src); 
	void pathDfsWrite(int src);
};

#endif
