#ifndef GCON
#define GCON
#include<iostream>
#include<map>
#include<vector>
using namespace std;

struct Node{
	int data;
	map<int, vector<int>> adjlist;
};

typedef Node* nodeptr;

class Graph{
private:
	std::map<int, vector<int>> adjlist;
public:
	void insertVertices(int data, map<int, vector<int>> links);
	void printingElements(int data);
};

#endif