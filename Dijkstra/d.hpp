#ifndef DIALGO
#define DIALGO
#include<iostream>
#include<string>
#include<map>                                                                                            
#include<vector>
#include<queue>
#include<tuple>
using namespace std;
class WeightedDirectedGraph
{
private:
	/* 
		source : [(destination, weight), (destination, weight)]
		map<int, vector(tuple(int, int))>
	*/
	std::map<int, std::vector<tuple<int, int>>> adjList; 
	vector<int> vertices;
	map<int, int> shortestDistanceMap;
	vector<int> visitedNode;

public:
	WeightedDirectedGraph();
	void addVeritces(int data);
	void addEdges(int source, vector<tuple<int, int>> links);
	void shortestPath(int source);
	bool CheckVisited(int node);
	int edgeWeight(int src, int des);
	vector<int> neighbourNodes(int src);
	vector<int> allNodes();		
};
#endif