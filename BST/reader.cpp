#include "combine.hpp"

/*
  Trying to open the file.
*/

bool openingFile(string name){
  string fileName = name + ".txt";
  fstream file;  
  file.open(fileName);
  if(file.is_open()){
    return true;
  }
  return false;
}

/*
  Reader - Read words from the paragraphs in c++ and return a vector<string>
  based on that
*/

vector<string> reader(bool fileStatus){
  if(fileStatus == true){
    vector<string> wordsDataSet;
    string word;
    fstream file;
    file.open("file.txt");
    while(file >> word){
      wordsDataSet.push_back(word);
    }
    return wordsDataSet;
  }
  return {};
}
