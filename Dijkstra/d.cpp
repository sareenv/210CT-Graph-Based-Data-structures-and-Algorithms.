#include "d.hpp"

WeightedDirectedGraph::WeightedDirectedGraph(){
	this->adjList = {};
	this->vertices = {};
}

void WeightedDirectedGraph::addVeritces(int data){
	this->vertices.push_back(data);
	cout<<"Inserted the new vertices with value of " << data <<endl;
	return;
}

void WeightedDirectedGraph::addEdges(int source, int destination, int weight){
	int keyNode = source;
	vector<tuple<int, int>> destinationNode;
	tuple<int, int> destinationTuple = make_tuple(destination, weight);
	this->adjList.insert(pair<int, vector<tuple<int, int>>>)



	cout<<"WIP"<<endl;
	return;
}

// Here comes the algorithm - Disktr'a Algorithm. - Last
void WeightedDirectedGraph::shortestPath(){
	return;
}

int main(){
	WeightedDirectedGraph w1;
	w1.addVeritces(12);
	w1.addVeritces(13);
	w1.addVeritces(14);
	w1.addEdges(1, 1, 1);
	return 0;
}