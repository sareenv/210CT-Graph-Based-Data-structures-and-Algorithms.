/*
   Reading the file in cpp
   ----------------------- 
    Resource to learn the file handling in c++ - http://www.cplusplus.com/doc/tutorial/fil    
    ofstream - stream class to write on the files.
    ifstream - stream class to read on the files. 
    fstream - stream class for both read/write on the files. 
    
    1. file.open will open the file. 
    2. file.close will close the file - v imp rember.
    
   open function has 2 parameter 1 is filename, 2 is mode so, the second parameter is optional. 
       some of the modes are 
           1. ios::in -> for input operation. 
           2. ios:: out -> for output operation. 
           3. ios:: ate -> set the initial position at the end of the file. not default but like begining of the file. 
       Here - ios::in 
       
       bad - returns true if the reading or the writing operation fails. 
       fail - happens in case of bad and also happens when trying to read the int but the content is something else - usefull. 
           
       position related stuff .... Not sure. 
        1. tellg - tell the location of the pointer to read the stuff  
        2. seekg - get the location of the poiner where is it at the moment. 
      
      >> is the stream extraction operator which returns when reaches the eol(end of the line).
      for strings it stops at the white spaces , special char - need to test this out.       
      

      VImportant -> :: is scope resolution operator here.

*/

#include "test.h"
#include "reader.hpp"

using namespace std;

bool File:: openingFile(string name){
  string fileName = name + ".txt";
  fstream file;  
  file.open(fileName);
  if(file.is_open()){
    cout<<"The file is opened sucessfully "<<endl;
    cout<<"File is sucessfully opened now we can perform the actions "<<endl;
    return true;
  }
  cout<<"Counldn't open the file "<<endl;
  return false;
}

void File::readingFile(){
  fstream file;
  file.open('file')
  return;
}

int main(){
  return 0;
}






