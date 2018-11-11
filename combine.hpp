#ifndef COMBINE_H
#define COMBINE_H
#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<string>

using namespace std;


struct Node{
	string data; 
	Node* left; 
	Node* right;
	int count; 
};

typedef Node* nodeptr;

class BinarySearchTree{
public:
	
	nodeptr insert(nodeptr root, string data);
	void preorderPrinting(nodeptr root);
	bool searchNode(nodeptr root, string target);
	void deleteNode(nodeptr root, string nodedata);
	
};
bool openingFile(string name);
void readData(bool openStatus, BinarySearchTree b1);

#endif