#include<iostream>
using namespace std;

class Node {
    public: 
        int data;
        Node* left;
        Node* right;
    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void BFS(Node* root) {

}
int main() {

Node* root = new Node(10);
root->left = new Node(11);
root->right = new Node(22);

cout<<root->data<<endl;
cout<<root->left->data<<endl;
cout<<root->right->data<<endl;

}