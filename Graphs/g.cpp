#include "gc.hpp"

// Creating the new node with id :) in case of nodes with same data 
void Graph::insertVertices(int data, int id){
	nodeptr newnode = new Node();
	newnode->data = data;
	newnode->id = id;
}

// Creating the edge which is source to destination.
void Graph::addEdge(int id, int src, int des){
	this->adjancylist.insert(pair<int, vector<int>>(id,{src, des}));
	this->adjancylist.insert(pair<int, vector<int>>(id,{des, src}));
}

// printing all the neighbour elements 
void Graph::printingElements(int id){
	auto elementMap = this->adjancylist.find(id);
	vector<int> neighbour = elementMap->second;
	for(int i = 0; i<neighbour.size(); i++){
		cout<<neighbour[i]<<endl;
	}
	return;
}