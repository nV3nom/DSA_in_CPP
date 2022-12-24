#include<iostream>
using namespace std;

// Node class to represent a node in the tree
class Node{
    public:
    // data member to store the value of the node
    int data;
    // left and right pointers to store the address of the left and right child nodes
    Node *left, *right;
};

// BST class to represent a binary search tree
class BST{
    public:
    // root node to store the address of the root of the tree
    Node *root;
    // constructor to initialize the root node to NULL
    BST(){
        root = NULL;
    }
    // function to insert a new node into the tree
    Node *insert(Node*,int);
    // function to search for a particular value in the tree
    int search(int);
};

// function to insert a new node into the tree
Node *BST::insert(Node* root, int value){
    // create a new node
    Node *newnode= new Node();
    // assign the value to the data member of the new node
    newnode->data=value;
    // initialize the left and right pointers of the new node to NULL
    newnode->left=NULL;
    newnode->right=NULL;
    // if the root of the tree is NULL, set the root to the new node
    if(root==NULL){
        root=newnode;
    }
    // if the value of the new node is greater than or equal to the value of the root node
    // insert the new node into the right subtree
    else if ( value>=root->data){
        root->right=insert(root->right, value);
    }
    // if the value of the new node is less than the value of the root node
    // insert the new node into the left subtree
    else{
        root->left=insert(root->left, value);
    }
    // return the root of the tree
    return root;    
}

// function to search for a particular value in the tree
int BST::search(int searchKey){
    // create a temporary pointer to the root of the tree
    Node *temp = root;
    // iterate until the end of the tree is reached or the value is found
    while(temp != NULL){
        // if the value is found, return the value
        if(temp->data == searchKey ){
            return searchKey;
        }
        // if the search key is less than the value of the current node, move to the left child
        else if(temp->data > searchKey){
            temp = temp->left;
        }
        // if the search key is greater than the value of the current node, move to the right child
        else{
            temp = temp->right;
        }
    }
    // if the value is not found, return -1
    return -1;
}

int main(){
    // Create an instance of BST class called t
    BST t;

    // Declare variables to store user input
    int num, srchkey;
    string ch = "y";

    // Prompt user to enter a key number
    cout << "\nEnter the key number: ";
    cin >> num;

    // Insert the key number into the BST
    t.root = t.insert(t.root, num);

    // Loop until user decides to stop creating junctions
    do{
        // Prompt user to enter another key number
        cout << "\n Do you want to create another junction [y/n]? ";
        cin >> ch;

        // If user wants to create another junction, ask for a key number and insert it into the BST
        if(ch.compare("y") == 0){
            cout << "\nEnter the key number";
            cin >> num;
            t.root = t.insert(t.root, num);
        }
        // Otherwise, break out of the loop
        else{
            break;
        }

    } while(true);

    // Prompt user to enter a key to search for
    cout << "\n Enter the key to be searched: ";
    cin >> srchkey;

    // Search for the key in the BST and store the result in a flag variable
    int flag = t.search(srchkey);

    // If the flag variable is equal to the search key, the key was found
    if(flag == srchkey){
        cout << "\n" << srchkey << " found";
    }
    // Otherwise, the key was not found
    else{
        cout << "\n" << srchkey << " not found";
    }

    // Return 0 to indicate successful execution of the program
    return 0;
}
