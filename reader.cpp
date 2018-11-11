#include "combine.hpp"
#include<string>
// checking if we can open the file
bool openingFile(string name){
  string fileName = name + ".txt";
  fstream file;  
  file.open(fileName);
  if(file.is_open()){
    return true;
  }
  return false;
}


/* open the file and call the insertation function. */

void readData(bool openStatus, BinarySearchTree b1){
  if(openStatus == true){
    string word;
    fstream file;
    file.open("file.txt");
    nodeptr result = b1.insert(nullptr, "hello");
    while(file >> word){
      b1.insert(result, word);
    }

    cout<<"Done inserting the values now printing the values \n";
    b1.preorderPrinting(result);


    return;

  }else{
    cout<<"Couldn't open the file so cannot perform the insertation operation to the file ";
    return;
  }
}



// vector<string> FileHandling::readingFile(fstream file){
//   string words;
//   vector<string> wordsvector;
//   file.open("file.txt");
//   while(file >> words){
//     wordsvector.push_back(words);
//   }
//   return wordsvector;
// }
