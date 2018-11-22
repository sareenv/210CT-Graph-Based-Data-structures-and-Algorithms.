#include "gc.hpp"
/*
	Creating the new nodes and appending to the private attribute
	of the class node Data Set.
*/
void Graph::insertVertices(int nodeData){
	nodeptr newnode = new Node();
	newnode->data = nodeData;
	this->nodesVector.push_back(newnode->data);
}

/*
	Check if the nodes are available.
	if they are available then true else false return
*/
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

/*
	Checking if the nodes that we are connecting is available
	if yes the map them in adjancecy list.
*/

void Graph::addEdge(int srcNodeData, vector<int> dest){
 	pair<int, vector<int>> listpair = make_pair(srcNodeData, dest);
	bool valid;
	for(int i = 0; i< dest.size(); i++){
			valid = nodeCheck(dest[i]);
			if(valid == false){
				break;
			}
	}
	if (valid == true){
		this->adjancylist.insert(listpair);
		cout<<"Inserted edge"<<endl;
	}else{
		cout<< "Please check all the nodes in adjancency list "<<endl;
		cout<< "The nodes donot exist in the graph that are tried to link "<<endl;
	}
	return;
}


/*
	Printing all the neighbour elements 
*/
void Graph::printingElements(int data){
	auto elementMap = this->adjancylist.find(data);
	vector<int> neighbour = elementMap->second;
	for(int i = 0; i<neighbour.size(); i++){
		cout<<neighbour[i]<<endl;
	}
	return;
}


/*
	isConnected - If the all the nodes have access to all other nodes in the graph 
	then it's connected else not connected!
	
	Need to refine this - need something that can compare two vector based on content.
*/

bool Graph::isConnected(){
	vector<int> nodesDataSet = this->nodesVector;
	map<int, vector<int>> alist= this->adjancylist;

	for(auto i = adjancylist.begin(); i!=adjancylist.end(); i++){
		vector<int> list = i->second;
		if(list != nodesDataSet){
			cout<<"No, Not Connected "<<endl;
			return false;
		}
	}
	cout<<"Yes Connected "<<endl;
	return true;
}




