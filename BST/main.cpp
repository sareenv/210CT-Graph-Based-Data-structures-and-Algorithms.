#include "combine.hpp"

int main(){
    BinarySearchTree b1;
    bool check = openingFile("file");
    nodeptr root;
    if(check == true){
    	vector<string> wordsdata = reader(true);
    	root = b1.insert(nullptr, wordsdata[0]);
    	for(int i = 0; i< wordsdata.size(); i++){
    		b1.insert(root, wordsdata[i]);
    	}
    }
    b1.preorderPrinting(root);
    return 0;
}