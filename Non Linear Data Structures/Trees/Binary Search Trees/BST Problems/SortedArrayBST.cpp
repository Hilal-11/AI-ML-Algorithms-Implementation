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

void sortedArrayBST(Node* root , vector<int>& result) {
    if(root == NULL) return;

    vector<int> result;

    sortedArrayBST(root->left , result);
    result.push_back(root->data);
    sortedArrayBST(root->right , result);


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

    vector<int> result;
    sortedArrayBST(root , result);

    for (int data : result) {
        cout << data << "\t";
    }

    return 0;
}