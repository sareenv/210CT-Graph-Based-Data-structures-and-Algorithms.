/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_BinarySearchTreeTestingSuite_init = false;
#include "test.h"

static BinarySearchTreeTestingSuite suite_BinarySearchTreeTestingSuite;

static CxxTest::List Tests_BinarySearchTreeTestingSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_BinarySearchTreeTestingSuite( "test.h", 6, "BinarySearchTreeTestingSuite", suite_BinarySearchTreeTestingSuite, Tests_BinarySearchTreeTestingSuite );

static class TestDescription_suite_BinarySearchTreeTestingSuite_testInsertation : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BinarySearchTreeTestingSuite_testInsertation() : CxxTest::RealTestDescription( Tests_BinarySearchTreeTestingSuite, suiteDescription_BinarySearchTreeTestingSuite, 9, "testInsertation" ) {}
 void runTest() { suite_BinarySearchTreeTestingSuite.testInsertation(); }
} testDescription_suite_BinarySearchTreeTestingSuite_testInsertation;

static class TestDescription_suite_BinarySearchTreeTestingSuite_testSearching : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BinarySearchTreeTestingSuite_testSearching() : CxxTest::RealTestDescription( Tests_BinarySearchTreeTestingSuite, suiteDescription_BinarySearchTreeTestingSuite, 22, "testSearching" ) {}
 void runTest() { suite_BinarySearchTreeTestingSuite.testSearching(); }
} testDescription_suite_BinarySearchTreeTestingSuite_testSearching;

static class TestDescription_suite_BinarySearchTreeTestingSuite_testPreorder : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BinarySearchTreeTestingSuite_testPreorder() : CxxTest::RealTestDescription( Tests_BinarySearchTreeTestingSuite, suiteDescription_BinarySearchTreeTestingSuite, 35, "testPreorder" ) {}
 void runTest() { suite_BinarySearchTreeTestingSuite.testPreorder(); }
} testDescription_suite_BinarySearchTreeTestingSuite_testPreorder;

static FileTestingSuite suite_FileTestingSuite;

static CxxTest::List Tests_FileTestingSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_FileTestingSuite( "test.h", 40, "FileTestingSuite", suite_FileTestingSuite, Tests_FileTestingSuite );

static class TestDescription_suite_FileTestingSuite_testFileOpen : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FileTestingSuite_testFileOpen() : CxxTest::RealTestDescription( Tests_FileTestingSuite, suiteDescription_FileTestingSuite, 43, "testFileOpen" ) {}
 void runTest() { suite_FileTestingSuite.testFileOpen(); }
} testDescription_suite_FileTestingSuite_testFileOpen;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
