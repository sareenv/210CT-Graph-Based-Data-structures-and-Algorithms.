#  this target will compile all the files.
all:
	g++ --std=c++14  BST.cpp reader.cpp main.cpp -o b

# This target is to generate the test runner file from header file
# for the BST test header file - test.h
gt: 
	cxxtestgen --error-printer -o runner.cpp test.h

# this target is to run the bst test
bt:
	g++ --std=c++14 BST.cpp runner.cpp -o r

	