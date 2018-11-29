#ifndef DIALGO
#define DIALGO
#include<iostream>
#include<string>
#include<map>                                                                                            
#include<vector>
#include<tuple>
using namespace std;
struct ShortestPath{
	int starting;
	int destination;
	int shortestPath;
};
typedef ShortestPath* sPath;


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
public:
	WeightedDirectedGraph();
	void addVeritces(int data);
	void addEdges(int source, int destination, int weight);
	void shortestPath();
	
};
#endif