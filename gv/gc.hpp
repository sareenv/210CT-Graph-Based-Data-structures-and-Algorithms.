#ifndef GCON
#define GCON
#include<iostream>
#include<map>
#include<vector>
using namespace std;

struct Node{
	int data;
	vector<int> links;
};

struct Edge{
	int start;
	int end;
};


typedef Node* nodeptr;
typedef Edge* edgeptr;

class Graph{
public:
	
	void insertVertices(int data, vector<int> links);
	void insertEdge(int starting, int ending);
	void printingElements(int data);
};

#endif