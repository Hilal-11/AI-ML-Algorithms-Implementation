#include<iostream>
#include<queue>
#include<vector>
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

// vector<vector<int>> level_order_traversal(Node* root) {
//     if(root == NULL) return {};

//     queue<Node*> q;
//     int currentLevel = 0;
//     vector<vector<int>> res;

//     q.push(root);

//     while(!q.empty()) {
//         int len = q.size();
//         res.push_back({});

//         for(int i = 0; i < len; i++) {
//             Node* node = q.front();
//             q.pop();

//             res[currentLevel].push_back(node->data);

//             if(node->left != NULL) {
//                 q.push(node->left)
//             }
//             if(node->right != NULL){
//                 q.push(node->right)
//             }
//         }
//         currentLevel++;
//     }
//     return res;
// }

void BFS(Node* root) {
    if(root == NULL) return;

    queue<Node *> q;
    q.push(root);
    while (!q.empty()){
        Node* node = q.front();
        q.pop();
        cout<<node->data<<"\t";

        if(node->left != NULL) q.push(node->left);
        if(node->right != NULL) q.push(node->right);
    }
    
}


int main() {

Node* root = new Node(10);
root->left = new Node(11);
root->right = new Node(22); 
root->left->left = new Node(61);
root->left->right = new Node(31);
root->right->right = new Node(23);

BFS(root);




}