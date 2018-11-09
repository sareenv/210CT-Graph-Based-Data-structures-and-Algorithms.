#include "combine.hpp"
using namespace std;

bool FileHandling:: openingFile(string name){
  string fileName = name + ".txt";
  fstream file;  
  file.open(fileName);
  if(file.is_open()){
    return true;
  }
  return false;
}

vector<string> FileHandling::readingFile(fstream file){
  string words;
  vector<string> wordsvector;
  file.open("file.txt");
  while(file >> words){
    wordsvector.push_back(words);
  }
  return wordsvector;
}
