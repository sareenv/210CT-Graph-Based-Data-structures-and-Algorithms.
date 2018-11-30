#ifndef G_TEST
#define G_TEST
#include<cxxtest/TestSuite.h>
#include "gc.hpp"

class GraphsTestingSuite: public CxxTest::TestSuite{
public:
	// Testing the function for all the neighbours
	void testInsertation(void){
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
		TS_TRACE("Running the isConnected ");
		bool connected = g1.isConnected(13);
		TS_ASSERT_EQUALS(connected, true);
		bool connected1 = g1.isConnected(14);
		TS_ASSERT_EQUALS(connected1, true);
		bool connected2 = g1.isConnected(15);
		TS_ASSERT_EQUALS(connected2, true);
		bool connected3 = g1.isConnected(16);
		TS_ASSERT_EQUALS(connected3, true);
		TS_TRACE("Finished running isConnected ");
	}

};

#endif