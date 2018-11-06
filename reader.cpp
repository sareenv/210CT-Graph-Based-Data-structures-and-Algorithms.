#include<iostream>
#include<string>
#include<fstream>

using namespace std;

/*
   Reading the file in cpp
   ----------------------- 
    Resource to learn the file handling in c++ - http://www.cplusplus.com/doc/tutorial/files/
    
    ofstream - stream class to write on the files.
    ifstream - stream class to read on the files. 
    fstream - stream class for both read/write on the files. 
    
*/

void reader(){
    fstream file;
    file.open("file.txt");
    if(file.is_open()){
       cout<<"file opened successfully, performing the operations "<<endl;           
    }else{
        cout<<"Sorry, error opening the file. "<<endl;
        return;
    }
    
    return;
}



int main(){
    
    reader();
    return 0;
}