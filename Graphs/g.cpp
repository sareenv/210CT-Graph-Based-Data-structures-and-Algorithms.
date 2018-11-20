#include "gc.hpp"

// Creating the new node with id :) in case of nodes with same data 
void Graph::insertVertices(int data, int id){
	nodeptr newnode = new Node();
	newnode->data = data;
	newnode->id = this->a;
	this->id = this->a + 1;
}

// Creating the edge which is source to destination.
void Graph::addEdge(int src, int des){
	
}

// Printing all the elements
