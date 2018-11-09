#ifndef MY_Header
#define MY_Header
#include<cxxtest/TestSuite.h>
#include<iostream>
#include<string>




class BinarySearchTree{



}


class MyTestSuite1: public CxxTest::TestSuite{
    public:
    void testAddition(void)
    {
        TS_ASSERT(1 + 1 > 1);
        TS_ASSERT_EQUALS(1 + 1, 2);
    }
};

#endif