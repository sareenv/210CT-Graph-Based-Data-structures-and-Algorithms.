#ifndef MY_Header
#define MY_Header
#include<cxxtest/TestSuite.h>



class File{
public:
	std::bool openingFile(st::string fileName);
};

class MyTestSuite1: public CxxTest::TestSuite{
    public:
    void openingFileTest(void)
    {
      File f1;
      std::bool result = f1.openingFile('hello')
      TS_ASSERT_EQUALS(result, false)
    }
};

#endif