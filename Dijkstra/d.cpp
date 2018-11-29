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
	destinationNode.push_back(destinationTuple);
	this->adjList.insert(pair<int, vector<tuple<int, int>>>(source, destinationNode));
	cout<<"Edge connected from "<< source << " to " << destination << " with weight of "<< weight << endl;
	return;
}
// Returns true if the element is visited else return false.
bool WeightedDirectedGraph::CheckVisited(int source){
	for(int i = 0; i< this->visitedNode.size(); i++){
		if(this->visitedNode[i] == source){
			cout<<"Source Found "<<endl;
			return true;
		}
	}
	return false;
}


// Here comes the algorithm - Disktr'a Algorithm. - Last
void WeightedDirectedGraph::shortestPath(int source){
	cout<<"Entered the Disktr'a Algorithm. "<<endl;
	// Step 1 :- Set the source as zero and others as INT_Max 
	for(int i = 0; i< this->vertices.size(); i++){
		if(this->vertices[i] == source){
			// Source vertix and mark this vertix as the visited.
			pair<int, int> sourceShortestPathPair = make_pair(this->vertices[i], 0);
			this->shortestDistanceMap.insert(sourceShortestPathPair);
			this->visitedNode.push_back(this->vertices[i]);  
		}else{
			// Int_MAX - Referance - https://www.geeksforgeeks.org/int_max-int_min-cc-applications/ - returns +2147483647.
			// other vitex set it it infinity. In c++ we have INT_MAX
			pair<int, int> otherShortestPathPair = make_pair(this->vertices[i], 0);
			this->shortestDistanceMap.insert(otherShortestPathPair);
		}
	}
	// Step 2:- Now calculate the distance from the source to the other nodes.
	// Values connected to the source - adjList.
	for(auto i = this->adjList.begin(); i!= this->adjList.end(); i++){
		vector<tuple<int, int>> nodeTupleVector = i->second;
		for(int j = 0; j< nodeTupleVector.size(); j++){
			tuple<int, int> nodeTuple = nodeTupleVector[j];
			cout<<"Source is "<< i->first <<" Destination is "<<get<0>(nodeTuple) << " and it's weight is " <<get<1>(nodeTuple) <<endl;

		}
	}

	return;
}
int main(){
	WeightedDirectedGraph w1;
	w1.addVeritces(12);
	w1.addVeritces(13);
	w1.addVeritces(14);
	w1.addEdges(12, 13, 88);

	w1.shortestPath(12);
	return 0;
}