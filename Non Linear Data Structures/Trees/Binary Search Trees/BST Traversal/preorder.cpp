
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void preOrderTraversal(Node* root) {
    if(root == NULL) return;

    cout<<root->data<<"\t";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

int main() {

    Node* root = new Node(50);   
    root->left = new Node(40);
    root->right = new Node(60);

    root->left->left = new Node(30);
    root->left->right = new Node(42);
    root->left->left->left = new Node(10);
    root->left->left->right = new Node(32);

    root->right->left = new Node(55);
    root->right->right = new Node(70);


    preOrderTraversal(root);

    return 0;
}
