#include "combine.hpp"
/*
    Reference :- Lecture Slides (Coventry University). 
*/

nodeptr BinarySearchTree::insert(nodeptr root, string data){

    nodeptr newnode = new Node();
    newnode->data = data;
    newnode->left = nullptr;
    newnode->right = nullptr;
    newnode->count = 1;

    if(root == nullptr){
        root = newnode;
    }
    
    // Right Side
    else if(root != nullptr && data > root->data){

        if(root->right == nullptr){
           root->right = newnode; 
        }

        else{
            BinarySearchTree::insert(root->right, data);
        }
    }

    // Left Side.
    else if(root != nullptr && data < root->data){
        if(root->left == nullptr){
            root->left = newnode;
        }

        else{ 
            BinarySearchTree::insert(root->left, data);
        }
    }

    // If it already exist
    else{
        cout<<"The Node already exist so, it's frequancy is now chaged as part of node strucutre"<<endl;
        root->count = root->count + 1;
        cout<<"The node was "<< root->data<< " and the frequancy is "<<root->count<<endl;
    }

    return root;
}



    /*
        Preorder Printing
            1. Print the root node then print the left node to it and so .. on
            till the time it doesnot reach the leaf node. 

            2. Then printing the right side if the node of upper layer of node using 
            the recursive calls and and again repeat the step of the resursion. 

        Important point is Create the base case for the function. 
            - when the node is the null pointer,
        - Make recursive calls to make the printing of the left sub elements of the list till the time it hit the base case.
        - Make recursive calls to make the printing of the left sub elements of the list.
    */

void BinarySearchTree::preorderPrinting(nodeptr root){
    if (root == nullptr) return;
        cout<<root->data<<endl;
        preorderPrinting(root->left);
        preorderPrinting(root->right);
        return;
}
    
bool BinarySearchTree::searchNode(nodeptr root, string target){
    bool foundNode = false;
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

void BinarySearchTree::deleteNode(nodeptr root, string nodedata){
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
            auto smallest = root->data;
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