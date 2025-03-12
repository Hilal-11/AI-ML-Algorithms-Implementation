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

//   Recursive approach pre-order traversel
// void preOrderTraversal(Node* root) {
//     if (root == NULL) return;

//     cout<<root->data<<"\t";
//     preOrderTraversal(root->left);
//     preOrderTraversal(root->right);
// }

void preOrderTraversal(Node* root) {
    if(root == NULL) return;
    stack<Node*> st;
    st.push(root);

    while (!st.empty()){
        Node* node = st.top();
        st.pop();
        cout<<node->data<<"\t";

        if(node->right != NULL) {
            st.push(root->right);
        }
        if(node->left != NULL) {
            st.push(root->left);
        }
    }
}

int main () {

    Node* root = new Node(10);
    root->left = new Node(11);
    root->right = new Node(21);

    preOrderTraversal(root);


    return 0;
}