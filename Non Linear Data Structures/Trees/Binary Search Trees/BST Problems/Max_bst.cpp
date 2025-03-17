#include<iostream>
#include<vector>
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

int Max_BST(Node* root) {
    if(root == NULL) return;

    vector<int> elements;

    Max_BST(root->left);
    elements.push_back(root->data);
    Max_BST(root->right);
    
    return elements[elements.size() -1];

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

    return 0;
}