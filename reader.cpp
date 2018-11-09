/*
   Reading the file in cpp
   ----------------------- 
    Resource to learn the file handling in c++ - http://www.cplusplus.com/doc/tutorial/files/
    
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
        
       
*/

#include<iostream>
#include<string>
#include<fstream>

using namespace std;

void reader(){
    fstream file;
    file.open("file.txt", ios::in);

    if(file.is_open()){
       cout<<"file opened successfully, performing the operations "<<endl;           
    }else{
        cout<<"Sorry, error opening the file. "<<endl;
    }
    file.close();
    return;
}



int main(){
    
    reader();
    return 0;
}