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

void inOrderTraversal(Node* root) {
    if(root == NULL) return;

    inOrderTraversal(root->left);
    cout<<root->data<<"\t";
    inOrderTraversal(root->right);

}


int main () {

    Node* root = new Node(10);
    root->left = new Node(11);
    root->right = new Node(21);

    inOrderTraversal(root);


    return 0;
}