#include <iostream>
#include <deque>
#include <stdlib.h>

using namespace std;

class Node{
    public:
    int data;
    Node *left,*right;
};

//Create a new node
Node* newNode(int data){
    Node* node = new Node();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void newTree(Node* &root){
    root = newNode(6);
    root->left = newNode(3);
    root->right = newNode(8);
    root->right->right = newNode(4);
    root->right->left = newNode(2);
    root->right->left->left = newNode(1);
    root->right->left->right = newNode(7);

}

void printTree(Node* root){
    if(root == NULL)
        return;
    
    cout << root->data << " -> ";
    printTree(root->left);
    printTree(root->right);
}
int main(){
    return 0;
}