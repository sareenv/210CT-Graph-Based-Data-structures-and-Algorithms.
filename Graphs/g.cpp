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


// printing stuff 
// find the perticular item from it's key
// auto result = this->adjancylist.find(src);
// vector<int> adjanlist  = result->second;
// for()