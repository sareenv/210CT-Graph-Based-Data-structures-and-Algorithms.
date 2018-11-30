// #include "combine.hpp"
// #include "test.h"

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

/*
  This file needs the changes.
*/


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
