#  this target will compile all the files.
all:
	g++ --std=c++14  BST.cpp main.cpp -o b
# this target is to run the bst test
bt:
	g++ --std=c++14 BST.cpp runner.cpp -o r
# This target is to generate the test runner file from header file
gt: 
	cxxtestgen --error-printer -o runner.cpp test.h
	
