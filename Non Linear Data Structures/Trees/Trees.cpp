#include<iostream>
using namespace std;

class Node {
    public :
        int data;
        Node* first_child;
        Node* second_child;
        Node* third_child;
        Node* forth_child;

    Node(int data) {
        this->data = data;
        this->first_child = NULL;
        this->second_child = NULL;
        this->third_child = NULL;
        this->forth_child = NULL;
    }
};
int main () {

    Node* root = NULL;
    root->data = 10;
    cout<<root->data;

    return 0;
}