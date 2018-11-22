#include "gc.hpp"

// Creating the new node with id :) in case of nodes with same data 
void Graph::insertVertices(int nodeData){
	nodeptr newnode = new Node();
	newnode->data = nodeData;
	this->nodesVector.push_back(newnode->data);
}

// Creating the edge which is source to destination.
void Graph::addEdge(int srcNodeData, vector<int>desNodeData){
	vector<int> nodesDataSet = this->nodesVector;
	// this is just one way
	this->adjancylist.insert(pair<int, vector<int>>(srcNodeData, desNodeData));
}

// Check if the node exist in the node data set or not 
// Linear Search O(n).
bool Graph::nodeCheck(int nodeData){
	int currentNode;
	int i = 0;
	while(i < this->nodesVector.size()){
		currentNode = this->nodesVector[i];
		if(nodeData == currentNode){
			return true;
		}
		i++;
	}
	return false;
}


// printing all the neighbour elements 
void Graph::printingElements(int data){
	auto elementMap = this->adjancylist.find(data);
	vector<int> neighbour = elementMap->second;
	for(int i = 0; i<neighbour.size(); i++){
		cout<<neighbour[i]<<endl;
	}
	return;
}

// Need to remove from both later. 

// void Graph::printNodes(){
// 	vector<int> nodes = this->nodesVector;
// 	for(int i = 0; i<nodes.size();i++){
// 		cout<<nodes[i]<<endl;
// 	}
// }


