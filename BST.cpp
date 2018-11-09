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
 
   nodeptr insert(nodeptr root, int data){
        
        Node* newnode = new Node();
        
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
                    root->left = newnode;
                }
            }else{
                insert(root->left, data);
            }
        }

        return root;
    }
    
    /*
        Printing the element in the pre order...
            1. Print the root node then print the left node to it and so .. on
            till the time it doesnot reach the leaf node. 

            2. Then printing the right side if the node of upper layer of node using 
            the recursive calls and and again repeat the step of the resursion. 

        Important point is Creat the base case for the function. 
            - when the node is the null pointer,
        - Make recursive calls to make the printing of the left sub elements of the list till the time it hit the base case.
        - Make recursive calls to make the printing of the left sub elements of the list.


    */


    void preorderPrinting(nodeptr root){
        if (root == nullptr) return;
        cout<<root->data<<endl;
        preorderPrinting(root->left);
        preorderPrinting(root->right);
        return;
    }
    
    
    // finding the element in bst and returning bool 
    /*
     1. Check if the root node is eqaul to target. cout and return the function. 
     2. IF target > root->data THEN Recursion(root->left, data)
     3. Else Recursion(root->right, daat)
     */
    
    void serach(nodeptr root, int target){
            
        if(root->data == target){
            cout<<"Found the value here "<<endl;
            return;
        }
        else if(target > root->data && root->right != nullptr){
            serach(root->right, target);
        }else if (target < root->data && root->left != nullptr){
            serach(root->left, target);
        }else{
            cout<<"Element not found"<<endl;
        }

    }
    
    // Deleting the node here.     
    
    
    
};

int main(){
    BST b1;
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
    b1.serach(result, 7);



    return 0;
}
