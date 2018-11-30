#ifndef D_TEST
#define D_TEST
#include<cxxtest/TestSuite.h>
#include "d.hpp"
class DijkstraTestingSuite: public CxxTest::TestSuite{
public:
	// Testing the edge weight
	void testInsertation(void){
		WeightedDirectedGraph w1;
		w1.addVeritces(12);
		w1.addVeritces(13);
		w1.addVeritces(14);
		w1.addEdges(12, {make_tuple(13, 2), make_tuple(14, 10)});
		w1.addEdges(13, {make_tuple(14, 6)});
		TS_TRACE("Running the Weight Test ");
		int weight1 = w1.edgeWeight(12, 13);
		TS_ASSERT_EQUALS(connected, true);
		int weight2 = w1.edgeWeight(12, 14);
		TS_ASSERT_EQUALS(connected, true);
		int weight3 = w1.edgeWeight(13, 14);
		TS_ASSERT_EQUALS(connected, true);
		TS_TRACE("Finished running the Test");
	}
};

#endif