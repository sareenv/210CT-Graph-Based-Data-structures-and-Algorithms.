#ifndef COMBINE_H
#define COMBINE_H
#include<iostream>
#include<string>
#include<fstream>

class File{
public:
	bool openingFile(std::string fileName);
	void readingFile();
};

#endif