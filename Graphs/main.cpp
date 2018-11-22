#include "gc.hpp"

int main(){
	Graph g1;
	g1.insertVertices(5); 
	g1.insertVertices(4); 
	g1.addEdge(5, {4, 5});
	return 0;
}