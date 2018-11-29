#include "d.hpp"

WeightedDirectedGraph::WeightedDirectedGraph(){
	this->adjList = {};
	this->vertices = {};
}

void WeightedDirectedGraph::addVeritces(int data){
	this->vertices.push_back(data);
	return;
}



void WeightedDirectedGraph::addEdges(int source, int destination, int weight){
	nodeptr newNode = new Node();
	newNode->data = source;
	return;
}

// Here comes the algorithm - Disktr'a Algorithm.
void WeightedDirectedGraph::shortestPath(){
	return;
}

int main(){
	cout<<"Working "<<endl;
	return 0;
}