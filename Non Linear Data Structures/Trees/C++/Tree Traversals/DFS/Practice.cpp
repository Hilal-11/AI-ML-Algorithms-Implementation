#include<iostream>
#include<stack>
using namespace std;

class Node {
    public :
        char data;
        Node* left;
        Node* right;

    Node(char data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void preOrderTraversal(Node* root) {
	if(root == NULL) return;
	stack<Node*> st;
	st.push(root);
	while(!st.empty()) {
	    Node* node = st.top();
	    st.pop();
	    cout<<node->data<<"\t";
	    
	    if(node->right != NULL) st.push(node->right);
	    if(node->left != NULL) st.push(node->left);
	}
}

void inOrderTraversal(Node* root){
	if(root == NULL) return;
	stack<Node*> st;
	Node* current = root;
	while(current != NULL || !st.empty()){
	     while(current != NULL){
            st.push(current);
            current = current->left;
	     }
        current = st.top();
	    st.pop();
	    cout<<current->data<<"\t";
		
	     current = current->right;
	}	
}

void postOrderTraversal(Node* root){
	if(root == NULL) return;
	stack<Node*> st1;
	stack<Node*> st2;
	
	st1.push(root);
	while(!st1.empty()){
		Node* node = st1.top();
		st2.push(node);
		st1.pop();

		if(node->left != NULL) st1.push(node->left);
		if(node->right != NULL) st1.push(node->right);
	}
	
	while(!st2.empty()){
		Node* curr = st2.top();
		cout<<curr->data<<"\t";
		st2.pop();
	}
}


int main () {
    Node* root = new Node('A');
    root->left = new Node('B');
    root->right = new Node('C');
    root->left->left = new Node('D');
    root->left->right = new Node('E');
    root->right->left = new Node('F');
    root->right->right = new Node('G');
    preOrderTraversal(root);
    cout<<"\n";
    inOrderTraversal(root);
    cout<<"\n";
    postOrderTraversal(root);
    return 0;
}