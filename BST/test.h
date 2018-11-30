#ifndef MY_Header
#define MY_Header
#include<cxxtest/TestSuite.h>
#include "combine.hpp"

class BinarySearchTreeTestingSuite: public CxxTest::TestSuite{
  // Test for check if the insertation was sucessfull by checking return type.
  public:
  void testInsertation(void){
  	BinarySearchTree b1;
	nodeptr result = b1.insert(nullptr, "Learning"); 
	nodeptr result1 = b1.insert(result, "is"); 
	nodeptr result2 = b1.insert(result, "a"); 
	nodeptr result3 = b1.insert(result, "tool"); 
	TS_ASSERT_DIFFERS(result, nullptr);
	TS_ASSERT_DIFFERS(result1, nullptr);
	TS_ASSERT_DIFFERS(result2, nullptr);
	TS_ASSERT_DIFFERS(result3, nullptr);
  }

  // Testing for Node Search
  void testSearching(void){
  	BinarySearchTree b1;
  	nodeptr result = b1.insert(nullptr, "Learning"); 
  	b1.insert(result, "ComputerScience");
  	b1.insert(result, "Algorithms");
  	bool find1 = b1.searchNode(result, "Learning");
  	bool find2 = b1.searchNode(result, "Tree");
  	bool find3 = b1.searchNode(result, "Algorithms");
	TS_ASSERT_EQUALS(find1, true);
	TS_ASSERT_EQUALS(find2, false);
	TS_ASSERT_EQUALS(find3, true);
  }
  // Testing for preorder
  void testPreorder(void){
  	TS_SKIP("This test has been")
  }
};


#endif