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


void inOrderTraversal(Node* root) {
    if(root == nullptr) return; 
    
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

Node* SearchingBST(Node* root, int val){
    if(root == NULL) return NULL;
    if(root->data == val) return root;

    if(root->data > val) return SearchingBST(root->left , val);
    if(root->data < val) return SearchingBST(root->right , val);
    return root;
}

int main() {

    Node* root = new Node(50);   
    root->left = new Node(40);
    root->right = new Node(60);

    root->left->left = new Node(30);
    root->left->right = new Node(42);
    root->left->left->left = new Node(10);
    root->left->right->right = new Node(22);

    root->right->left = new Node(55);
    root->right->right = new Node(70);


    inOrderTraversal(root);
    cout<<endl; 
    // cout<<SearchingBST(root , 50)<<endl;
    if(SearchingBST(root , 22)){
        cout<<"True";
    }else{
        cout<<"False";
    }


    return 0;
}