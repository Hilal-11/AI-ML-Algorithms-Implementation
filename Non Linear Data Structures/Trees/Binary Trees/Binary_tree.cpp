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
int main () {
    Node* root = new Node(10);
    root->left = new Node(12);
    root->right = new Node(21);

    cout<<root->data<<endl;
    cout<<root->left->data<<"\t";
    cout<<root->right->data<<endl;


    
    return 0;
}