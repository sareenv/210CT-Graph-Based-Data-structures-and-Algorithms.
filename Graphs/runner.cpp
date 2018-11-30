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
bool suite_GraphsTestingSuite_init = false;
#include "test.h"

static GraphsTestingSuite suite_GraphsTestingSuite;

static CxxTest::List Tests_GraphsTestingSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_GraphsTestingSuite( "test.h", 6, "GraphsTestingSuite", suite_GraphsTestingSuite, Tests_GraphsTestingSuite );

static class TestDescription_suite_GraphsTestingSuite_testInsertation : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_GraphsTestingSuite_testInsertation() : CxxTest::RealTestDescription( Tests_GraphsTestingSuite, suiteDescription_GraphsTestingSuite, 9, "testInsertation" ) {}
 void runTest() { suite_GraphsTestingSuite.testInsertation(); }
} testDescription_suite_GraphsTestingSuite_testInsertation;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
