#include<iostream>
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


void Pre_Order_Traversal(Node* root) {
    if (root == NULL) return;

    cout<<root->data<<"\t";
    Pre_Order_Traversal(root->left);
    Pre_Order_Traversal(root->right);
}

int main () {

    Node* root = new Node(10);
    root->left = new Node(11);
    root->right = new Node(21);

    Pre_Order_Traversal(root);


    return 0;
}