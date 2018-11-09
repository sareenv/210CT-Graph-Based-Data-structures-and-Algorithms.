#include<iostream>
#include<string>
#include<fstream>
#include<vector>
using namespace std;

void readingFile(){
  fstream file;
  string words;
  vector<string> mycollection;
  file.open("file.txt");
  while(file >> words){
    mycollection.push_back(words);
  }
  return;
}

int main(){
	readingFile();
	return 0;
}
