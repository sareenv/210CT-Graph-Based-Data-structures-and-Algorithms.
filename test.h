#ifndef MY_Header
#define MY_Header
#include<cxxtest/TestSuite.h>
#include<string>

class File{
public:
	bool openingFile(std::string fileName);
};

class MyTestSuite1: public CxxTest::TestSuite{
    public:
    	// Testing the opening of the file.
    void testOpening(void)
    {
      File f1;
      bool result = f1.openingFile("hello");
      TS_ASSERT_EQUALS(result, true);
      bool result2 = f1.openingFile("file");
      TS_ASSERT_EQUALS(result2, true);
      bool result3 = f1.openingFile("sample");
      TS_ASSERT_EQUALS(result3, true);
      bool result4 = f1.openingFile("file.txt");
      TS_ASSERT_EQUALS(result4, true);
      bool result5 = f1.openingFile("file.text");
      TS_ASSERT_EQUALS(result5, true);
    }
};

#endif