#ifndef MY_Header
#define MY_Header
#include<cxxtest/TestSuite.h>
#include "combine.hpp"

// 
// Testing all the files 
// class FileTestingSuite: public CxxTest::TestSuite{
//     public:
//     	// Testing the opening of the file.
//     void testOpening(void)
//     {

//     }
// };

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
  void testSearching(void){}


};


#endif