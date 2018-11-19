#  this target will compile all the files.
all:
	g++ --std=c++14 reader.cpp BST.cpp -o p 

graph:
	g++ --std=c++14 graph.cpp -o g
