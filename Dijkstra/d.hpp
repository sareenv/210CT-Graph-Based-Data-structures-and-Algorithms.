#ifndef DIALGO
#define DIALGO
#include<iostream>
#include<string>
#include<map>                                                                                            
#include<vector>
using namespace std;
struct ShortestPath{
	int starting;
	int destination;
	int shortestPath;
};
typedef ShortestPath* sPath;


struct Node{
	int data;
};
typedef Node* nodeptr;

class WeightedDirectedGraph
{
private:
	// map  source -> vector< map {desti, weight}>
	map<int, vector<map<int, int>>> adjList;
	vector<int> vertices;
public:
	WeightedDirectedGraph();
	void addVeritces(int data);
	void addEdges(int source, int destination, int weight);
	void shortestPath();
	
};
#endif