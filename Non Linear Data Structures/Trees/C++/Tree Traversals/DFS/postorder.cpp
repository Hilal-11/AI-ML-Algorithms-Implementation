#include<iostream>
#include<stack>
using namespace std;

class Node {
    public :
        int data;
        Node* left;
        Node* right;

    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void postOrderTraversal(Node* root) {
    if(root == NULL) return;

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<"\t";
}

int main () {

    Node* root = new Node(10);
    root->left = new Node(11);
    root->right = new Node(21);

    postOrderTraversal(root);


    return 0;
}