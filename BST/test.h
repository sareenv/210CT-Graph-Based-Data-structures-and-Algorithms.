#ifndef MY_Header
#define MY_Header
#include<cxxtest/TestSuite.h>

class FileTestingSuite: public CxxTest::TestSuite{
    public:
    	// Testing the opening of the file.
    void testOpening(void)
    {

    }
};



class BinarySearchTreeTestingSuite: public CxxTest::TestSuite{
  // Testing all the methods of the BST Here
  void testFindingNode(void){}
};


#endif