#include "d.hpp"

int main(){
	WeightedDirectedGraph w1;
	w1.addVeritces(12);
	w1.addVeritces(13);
	w1.addVeritces(14);
	w1.addEdges(12, {make_tuple(13, 2), make_tuple(14, 10)});
	w1.addEdges(13, {make_tuple(14, 6)});
	// w1.addEdges(14, {make_tuple(13, 7), make_tuple(14, 10)});
	w1.shortestPath(12);

	return 0;
}