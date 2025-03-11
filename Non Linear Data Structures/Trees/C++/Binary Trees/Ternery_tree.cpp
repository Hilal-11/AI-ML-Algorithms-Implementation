#include<iostream>
using namespace std;

class Node{
    public: 
        int data;
        Node* left;
        Node* mid;
        Node* right;
    Node(int data) {
        this->data = data;
        this->left = nullptr;
        this->mid = nullptr;
        this->right = nullptr;
    }
};
int main() {

    Node* root = new Node(10);
    root->left = new Node(11);
    root->mid = new Node(66);
    root->right = new Node(21);

    root->left->left = new Node(90);
    root->left->mid = new Node(91);
    root->left->right = new Node(97);

    root->mid->left = new Node(80);
    root->mid->mid = new Node(81);
    root->mid->right = new Node(87);
    
    root->right->left = new Node(70);
    root->right->mid = new Node(71);
    root->right->right = new Node(77);

    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->mid->data<<endl;
    cout<<root->right->data<<endl;

    cout<<root->left->left->data<<endl;
    cout<<root->mid->mid->data<<endl;
    cout<<root->right->right->data<<endl;



    return 0;
}