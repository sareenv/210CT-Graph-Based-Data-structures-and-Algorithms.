#include "gc.hpp"

/*
	Constructor method - 
	1. set the node set to be empty
	2. set the visited list to be also empty.
*/

Graph::Graph(){
	this->nodesVector = {};
	this->visitedNodes = {};
}

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
		cout<< "The verticies donot exist in the graph that are tried to link "<<endl;
	}
	return;
}


/*
 	Printing all graph with vertices and edges
*/
void Graph::printingGraph(){
	map<int, vector<int>>adjancylist = this->adjancylist;
	for(auto i = adjancylist.begin(); i!= adjancylist.end(); i++){
		cout<<"Vertices is "<<i->first<<endl;
		vector<int> links = i->second;
		for(int j = 0; j< links.size(); j++){
			cout<<"Edge connected to "<<links[j]<<endl;
		}
	}
}


/*
	Return all the neighbours and return the vector 
*/
vector<int> Graph::neighbourElements(int data){
	map<int, vector<int>> adjancylist = this->adjancylist;
	auto neighbourPair = adjancylist.find(data);
	vector<int> neighbourElements = neighbourPair->second;
	return neighbourElements;
}

/*
	isConnected - If the all the nodes have access to all other nodes in the graph 
	then it's connected else not connected!
	Need to refine this - need something that can compare two vector based on content.
	Referance 
	---------
	Website: https://en.cppreference.com/w/cpp/algorithm/is_permutation
	Topic: To compare is one vector's values are permutaion of others in c++.
	Code Used for referance: Example in the page.
	Needs to fix this as soon as possible. 
*/

bool Graph::isConnected(){
	vector<int> nodesDataSet = this->nodesVector;
	map<int, vector<int>> alist= this->adjancylist;
	for(auto i = adjancylist.begin(); i!=adjancylist.end(); i++){
		vector<int> list = i->second;
		// this feature of stl was referanced from the website.
		bool result = is_permutation(list.begin(), list.end(), nodesVector.begin());
		if(result == false){
			cout<<"Not connected "<<endl;
			return false;
		}
	}
	cout<<"Yes Connected "<<endl;
	return true;
}

/*
	Check visited node true or false
*/

bool Graph::checkVisited(int node){
	vector<int> visitedNodes = this->visitedNodes;
	for(int i = 0; i< visitedNodes.size(); i++){
		if(node == visitedNodes[i]){
			return true;
		}
	}
	return false;
}

/*
	Implementation of DFS. - Recursive Approach - Supports backtracking.
	1. Iterate throught the sequance of links for each vertices 
	2. Check if it's unvisited then make recursive call with it's unvisited links
	3. if visited then return that.
	4. Writting to the file.

	Important Points
	
	 Base case for the recursion 
			1. If the node is already visited then it should return 
			2. Which will backtrack to the previous node in the graph.

*/

vector<int> Graph::dfs(int source){

	vector<int> neighbourElements = Graph::neighbourElements(source);
	vector<int>dfsPath;
	this->visitedNodes.push_back(source);
	dfsPath.push_back(source);
	
	for(int i = 0; i< neighbourElements.size(); i++){
		if(checkVisited(neighbourElements[i])){
			// do nothing
		}else{
			cout<< neighbourElements[i]<<endl;
			
			Graph::dfs(neighbourElements[i]);
		}
	}
	return dfsPath;
}

/*
	Printing the graph DFS Treversal to text File. - DFS.txt
	Some problem is going on ...
*/

void Graph::pathDfsWrite(int source){
	fstream dfsPathFile;
	dfsPathFile.open("dfs.txt");
	vector<int> dfsPath = Graph::dfs(source);
	for(auto i = dfsPath.begin(); i!= dfsPath.end(); i++){	
		dfsPathFile << *i <<endl;
	}
	dfsPathFile.close();
	return;
}

/*
	Implementation of BSF code 
*/

void Graph::bfs(int source){
	this->visitedNodes = {};
	queue<int> bsfQ;
	bsfQ.push(source);
	cout<<"Source "<<source<<endl;
	this->visitedNodes.push_back(source);
	while(!bsfQ.empty()){
		int frontValue = bsfQ.front();
		vector<int> neighbours = Graph::neighbourElements(frontValue);
		for(auto i = neighbours.begin(); i!= neighbours.end(); i++){

			if(Graph::checkVisited(*i) == false){
				cout<<*i<<endl;
				bsfQ.push(*i);
				this->visitedNodes.push_back(*i);
			}
		}
		bsfQ.pop();
	}
}








/*
	Disktra's Algorithm - Shortest Path finding Algorithm.
*/



