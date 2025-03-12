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

// void postOrderTraversal(Node* root) {
//     if(root == NULL) return;

//     postOrderTraversal(root->left);
//     postOrderTraversal(root->right);
//     cout<<root->data<<"\t";
// }

void postOrderTraversal(Node* root) {
    if(root == NULL) return;

    stack<Node*> st1;
    stack<Node*> st2;

    st1.push(root);

    while(!st1.empty()) {
        Node* node = st1.top();
        st1.pop();
        st2.push(node);

        if(node->left != NULL) st1.push(node->left);
        if(node->right != NULL) st1.push(node->right);
    }
    while(!st2.empty()) {
        cout<<st2.top()->data<<"\t";
        st2.pop();
    }
}

int main () {

    Node* root = new Node(10);
    root->left = new Node(11);
    root->right = new Node(21);

    postOrderTraversal(root);


    return 0;
}