#include "combine.hpp"
using namespace std;


nodeptr BinarySearchTree::insert(nodeptr root, int data){
    nodeptr newnode = new Node();
    newnode->data = data;
    newnode->left = nullptr;
    newnode->right = nullptr;
    newnode->count = 1;

    if(root == nullptr){
        root = newnode;
    }
    
    else if(root != nullptr && data > root->data){

        if(root->right == nullptr){
           root->right = newnode; 
        }

        else{
            BinarySearchTree::insert(root->right, data);
        }
    }

    else if(root != nullptr && data < root->data){
        if(root->left == nullptr){
            root->left = newnode;
        }

        else{ 
            BinarySearchTree::insert(root->left, data);
        }
    }

    return root;
}


 
void BinarySearchTree::preorderPrinting(nodeptr root){
    if (root == nullptr) return;
        cout<<root->data<<endl;
        preorderPrinting(root->left);
        preorderPrinting(root->right);
        return;
    }



    
bool BinarySearchTree::searchNode(nodeptr root, int target){
    bool foundNode;
    
    if(root->data == target){
        cout<<"found element "<< target<<endl;
        foundNode =  true;
    }
    
    else if(target > root->data && root->right != nullptr){
        BinarySearchTree::searchNode(root->right, target);
    }
    
    else if (target < root->data && root->left != nullptr){
        BinarySearchTree::searchNode(root->left, target);
    }

    else{
        cout<<"Not found "<<endl;
        foundNode =  false;
    }

    return foundNode;
}


void BinarySearchTree::deleteNode(nodeptr root, int nodedata){
    // this means that we want to remove this node
    if(root->data == nodedata){
        if(root->left == nullptr && root->right == nullptr){
            root = nullptr;
            cout<<"Delete the node "<<endl;
        }
        else if(root->left == nullptr && root-> right != nullptr){
            root = root->left;
            cout<<"deleted the node "<<endl;
        }
        else if(root->left != nullptr && root->right != nullptr){
            int smallest = root->data;
            while(root->right != nullptr){
                nodeptr current = root->right;
                if(current->data < smallest){
                    smallest = current->data;
                }
            }
            root->data = smallest;
        }
    }
    else if(nodedata > root->data && root->right != nullptr){
        BinarySearchTree::deleteNode(root->right, nodedata);
    }

    else if(nodedata < root->data && root->right != nullptr){
        BinarySearchTree::deleteNode(root->right, nodedata);
    }

    else{
        cout<<"No such node found"<<endl;
        return;
    }

    
    
}






    
int main(){
    BinarySearchTree b1;
    nodeptr root = nullptr;
    auto result = b1.insert(root, 4);
    b1.insert(result, 10);
    cout<<"Value 10 inserted"<<endl;
    b1.insert(result, 16);
    cout<<"Value 16 inserted"<<endl;
    b1.insert(result, 20);
    cout<<"Value 20 inserted"<<endl;
    b1.insert(result, 3);
    cout<<"Value 3 is inserted "<<endl;
    b1.insert(result, 7);
    cout<<"Value 7 inserted"<<endl;
    cout<<"\n"<<"Printing in pre order "<<endl;
    // testing the printing of the elements.
    b1.preorderPrinting(result);

    // Searching the elements in the binary search tree using recursion. 
    cout<<"\n"<<"Searching the element  "<<endl;
    b1.searchNode(result, 7);


    // Deleting the elment .....

     cout<<"\n"<<"Deleting the element  "<<endl;

     b1.deleteNode(result, 3);

     cout<<"\n"<<"Printing again after deleting the element  "<<endl;
     

    return 0;
}
