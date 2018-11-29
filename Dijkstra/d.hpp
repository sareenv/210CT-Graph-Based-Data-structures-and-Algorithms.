#ifndef DIALGO
#define DIALGO
#include<iostream>
#include<string>
#include<map>                                                                                            
#include<vector>
#include<tuple>
using namespace std;


class WeightedDirectedGraph
{
private:
	/*
		List 
		source : [(destination, weight), (destination, weight)]
		map<int, vector(tuple(int, int))>
	*/
	map<int, vector<tuple<int, int>>> adjList;
	vector<int> vertices;
	map<int, int> shortestDistanceMap;
	vector<int> visitedNode;
public:
	WeightedDirectedGraph();
	void addVeritces(int data);
	void addEdges(int source, int destination, int weight);
	void shortestPath(int source);
	
};
#endif