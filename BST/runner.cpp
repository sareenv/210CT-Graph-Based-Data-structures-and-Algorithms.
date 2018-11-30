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
CxxTest::StaticSuiteDescription suiteDescription_BinarySearchTreeTestingSuite( "test.h", 33, "BinarySearchTreeTestingSuite", suite_BinarySearchTreeTestingSuite, Tests_BinarySearchTreeTestingSuite );

static class TestDescription_suite_BinarySearchTreeTestingSuite_testInsertation : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BinarySearchTreeTestingSuite_testInsertation() : CxxTest::RealTestDescription( Tests_BinarySearchTreeTestingSuite, suiteDescription_BinarySearchTreeTestingSuite, 35, "testInsertation" ) {}
 void runTest() { suite_BinarySearchTreeTestingSuite.testInsertation(); }
} testDescription_suite_BinarySearchTreeTestingSuite_testInsertation;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
