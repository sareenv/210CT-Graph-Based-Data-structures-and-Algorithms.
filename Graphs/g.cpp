#include "gc.hpp"

void Graph::insertVertices(int data, map<int, vector<int>> links){
	nodeptr newnode = new Node();
	newnode->data = data;
	newnode->adjlist = links;
}

void Graph::printingElements(int node){
	cout<<"Printing the neighbour elements "<<endl;
	return;
}

