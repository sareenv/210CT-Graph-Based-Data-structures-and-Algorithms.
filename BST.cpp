#include<iostream>
#include<string>

using namespace std;

struct Node{
	int data;
	Node* left;
	Node* right;
	int frequancy;
};

typedef struct Node* nodeptr;

class BST{

public:

	// current pointer.
	nodeptr c;

	nodeptr insert(nodeptr root, int data){
		// creating on stack 
        Node n;
         // reference to that node. 
        // Node* newnode = &n;
       // creating on heap
     
        newnode = new Node();
        
		// properties.
		newnode->data = data;
		newnode->left = nullptr;
		newnode->right = nullptr;
		newnode->frequancy = 1;

		if(root == nullptr){
			cout<<"Root node is added "<<endl;
			root = newnode;
		}
            
		else if(data == root->data){
			root->frequancy = root->frequancy + 1;
			cout<<"The frequancy is changed of parent fre is "<<root->frequancy<<endl;
		}

		// Node available. 
		else{
			// right side.
			if(data > root->data){
				if(root->right == nullptr){
					root->right = newnode;
				}else{
					insert(root->right, data);
					cout<<"Going to the right side but now parent is "<<root->right->data<<endl;
				}
			}
			// left side
			else if(data < root->data){
				if(root->left == nullptr){
					root = newnode;
				}
			}else{
				insert(root->left, data);
			}
		}

		return root;
	}
    
    // printing pre order done. 
    void preorderPrinting(nodeptr root){
        if root == nullptr return;
        cout<<root->data<<endl;
        preorderPrinting(root->left);
        preorderPrinting(root->right);
        return;
    }
    
    
    
    
    
};

int main(){
	BST b1;
	nodeptr root = nullptr;
	auto result = b1.insert(root, 4);
	b1.insert(result, 4);
	cout<<"Value 4 inserted"<<endl;
	b1.insert(result, 5);
	cout<<"Value 5 inserted"<<endl;
	b1.insert(result, 6);
	cout<<"Value 6 inserted"<<endl;
	b1.insert(result, 7);
	cout<<"Value 7 inserted"<<endl;
	return 0;
}