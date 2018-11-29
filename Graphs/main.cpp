#include "gc.hpp"

int main(){
	Graph g1;
	g1.insertVertices(13); 
	g1.insertVertices(14);
	g1.insertVertices(6); 
	g1.insertVertices(7); 
	g1.insertVertices(15); 
	g1.insertVertices(18); 
	
	g1.addEdge(13, {6, 14});
	g1.addEdge(14, {13, 18});
	g1.addEdge(6, {7, 13, 15});
	g1.addEdge(7, {6, 18});
	g1.addEdge(18, {7, 15, 14});
	g1.addEdge(15, {6, 18});

	
	// g1.printingGraph();
    g1.pathDfsWrite(13);
   	// g1.bfs(13);
	// g1.dfs(13);
	return 0;
}