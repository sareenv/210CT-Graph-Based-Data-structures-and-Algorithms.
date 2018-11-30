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


// Returns all the nodes in Graph 

vector<int> WeightedDirectedGraph::allNodes(){
	vector<int> nodeAll;
	for(auto i = this->adjList.begin(); i!= this->adjList.end(); i++){
		int node = i->first;
		nodeAll.push_back(node);
	}
	return nodeAll;
}

// Utility function to return the smallest value in vector

int WeightedDirectedGraph::smallest(vector<int> data){

	int smallest = data[0];
	for(int i = 0; i<data.size(); i++){	
		if(data[i]< smallest){
			smallest = data[i];
		}
	}
	return smallest;	
}

/*Disktr'a Algorithm. 
	Int_MAX - returns +2147483647 - Referance - https://www.geeksforgeeks.org/int_max-int_min-cc-applications/.
	Reading Referances 
		- https://brilliant.org/wiki/dijkstras-short-path-finder/
		- http://www.gitta.info/Accessibiliti/en/html/Dijkstra_learningObject1.html
*/	

void WeightedDirectedGraph::shortestPath(int source){
	cout<<"Entered the Disktr'a Algorithm. "<<endl;
	vector<int> neighbours = WeightedDirectedGraph::neighbourNodes(source);
	vector<int> unvisited;

	// Setting the path distance of 0 to source and INT_MAX to others (Considering INT_MAX as infinity).
	for(int i = 0; i< this->vertices.size(); i++){
		if(this->vertices[i] == source){
			
			// Source vertix and mark this vertix as the visited.
			pair<int, int> sourceShortestPathPair = make_pair(this->vertices[i], 0);
			this->shortestDistanceMap.insert(sourceShortestPathPair);
			this->visitedNode.push_back(this->vertices[i]);  
		}else{
			
			pair<int, int> otherShortestPathPair = make_pair(this->vertices[i], INT_MAX);
			this->shortestDistanceMap.insert(otherShortestPathPair);
		}
	}
	

	// At first all the nodes are unvisited.

	unvisited = WeightedDirectedGraph::allNodes();

	while(!unvisited.empty()){
		source = WeightedDirectedGraph::smallest(unvisited);
		vector<int> neighbours = WeightedDirectedGraph::neighbourNodes(source);
		auto shortestDistanceLink = this->shortestDistanceMap.find(source);
		int sourceShortestDistance = shortestDistanceLink->second;
		
		/* remove the source from unvisited nodes here 
		    - Referce - https://stackoverflow.com/questions/3385229/c-erase-vector-element-by-value-rather-than-by-position
			Now add it in the visited nodes.
		*/
		unvisited.erase(std::remove(unvisited.begin(), unvisited.end(), source), unvisited.end());

		for(int i = 0; i< neighbours.size(); i++){
			auto shortestDistanceNeighbour = this->shortestDistanceMap.find(neighbours[i]);
			int neighbourDistance = shortestDistanceNeighbour->second;
			// IF the source shortest distance and edge is less than the neighbour then update neighbour.
			int pathValue = sourceShortestDistance + WeightedDirectedGraph::edgeWeight(source, neighbours[i]);
			if(neighbourDistance > pathValue){
				this->shortestDistanceMap[shortestDistanceNeighbour->first] = pathValue;
			}
		}
	}
	return;
}
