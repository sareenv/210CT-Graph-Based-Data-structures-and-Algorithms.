#ifndef COMBINE_H
#define COMBINE_H
#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<string>

using namespace std;

class FileHandling{
public:
	bool openingFile(string fileName);
	vector<string> readingFile(fstream file);
};

struct Node{
	int data; // change this to the words.
	Node* left; 
	Node* right;
	int count; 
};

typedef Node* nodeptr;

class BinarySearchTree{
public:
	
	nodeptr insert(nodeptr root, int data);
	void preorderPrinting(nodeptr root);
	bool searchNode(nodeptr root, int target);
	void deleteNode(nodeptr root, int node);
};

#endif