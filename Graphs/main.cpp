#include "gc.hpp"

int main(){
	Graph g1;
	g1.insertVertices(5, 1); // Data, Id
	g1.insertVertices(4, 2); // Data, Id
	g1.insertVertices(6, 3); // Data, Id
	g1.addEdge(1, 5, 6); // Id, src, des
	g1.addEdge(2, 6, 4); // Id, src, des
	g1.printingElements(1);
	return 0;
}