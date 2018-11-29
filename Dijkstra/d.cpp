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

// Adds the edge of the algorithms.

void WeightedDirectedGraph::addEdges(int source, vector<tuple<int, int>> links){
	int keyNode = source;
	pair<int, vector<tuple<int, int>>> linksPair = make_pair(source, links);
	this->adjList.insert(linksPair);
	cout<<"Inserted Edge with source "<< source <<endl;
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
// returns the weigth of the edge - Used in the disjktra's algorithm
int WeightedDirectedGraph::edgeWeight(int source, int destination){
	for(auto i = this->adjList.begin(); i!= this->adjList.end(); i++){
		if(i->first == source){
			vector<tuple<int, int>> tupleVector = i->second;
			for(int j = 0; j < tupleVector.size(); j++){
				tuple<int, int> linksTuple  = tupleVector[j];
				if(get<0>(linksTuple) == destination){
					return get<1>(linksTuple);
				}
			}
		}
		return -1;
	}
	return 0;
}


// Returns the neighbour nodes of source node.
vector<int> WeightedDirectedGraph::neighbourNodes(int source){
	vector<int> neighbours = {}; 

	for(auto i = this->adjList.begin(); i!= this->adjList.end(); i++){
		if(i->first == source){
			vector<tuple<int, int>> tupleVector = i->second;
			for(int j = 0; j < tupleVector.size(); j++){
				tuple<int, int> linksTuple  = tupleVector[j];
				neighbours.push_back(get<0>(linksTuple));
			}
			return neighbours; 
		}
	}
	return {};
}

// Here comes the algorithm - Disktr'a Algorithm. - Last
void WeightedDirectedGraph::shortestPath(int source){
	cout<<"Entered the Disktr'a Algorithm. "<<endl;
	vector<int> unvisited = this->vertices;
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
	vector<int> neighbours = neighbourNodes(source);
	for(int i = 0; i<neighbours.size(); i++){
		if(WeightedDirectedGraph::CheckVisited(neighbourNodes[i]) == true){
			// do nothing 
		}else{
			cout<<"Doing stuff here "<<endl;
		}
	}	

	
	return;
}
int main(){
	WeightedDirectedGraph w1;
	w1.addVeritces(12);
	w1.addVeritces(13);
	w1.addVeritces(14);
	w1.addEdges(12, {make_tuple(13, 2), make_tuple(14, 10)});
	w1.addEdges(13, {make_tuple(13, 6), make_tuple(14, 10)});
	w1.addEdges(14, {make_tuple(13, 7), make_tuple(14, 10)});
	w1.addEdges(15, {make_tuple(13, 8), make_tuple(14, 10)});
	w1.neighbourNodes(13);
	return 0;
}