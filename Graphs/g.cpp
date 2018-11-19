#include "gc.hpp"


void Graph::insertVertices(int data, vector<int> links){
	nodeptr newnode = new Node();
	newnode->data = data;
	newnode->link = links;
}

void Graph::insertEdge(int starting, int ending){
	edgeptr newedge = new Edge();
	newedge->starting = starting;
	newedge->ending = ending;
}


int main(){
	Graph g1;
	g1.insert(5);
	return 0;
}