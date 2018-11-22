#include "gc.hpp"

int main(){
	Graph g1;
	g1.insertVertices(5); 
	g1.insertVertices(4); 
	g1.addEdge(5, {5, 4});
	g1.addEdge(4, {5, 4});
	g1.isConnected();
	return 0;
}