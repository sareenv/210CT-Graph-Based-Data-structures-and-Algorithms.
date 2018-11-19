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

typedef Node* nodeptr;

class Graph{
public:
	
	void insertVertices(int data, vector<int> links);
	void insertEdge(int starting, int ending);
	void printingElements(int data);
};

#endif