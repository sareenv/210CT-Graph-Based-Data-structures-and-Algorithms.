#include "gc.hpp"

int main(){
	Graph g1;
	g1.insertVertices(5); 
	g1.insertVertices(4);
	g1.insertVertices(6); 
	g1.addEdge(5, {4, 6, 5});
	g1.addEdge(4, {5, 6, 4});
	g1.addEdge(6, {4, 5, 6});
	g1.isConnected();
	return 0;
}