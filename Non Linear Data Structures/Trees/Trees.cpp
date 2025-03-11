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
    }
};
int main () {

    Node* root = new Node(10);
    Node* n1 = new Node(20);
    Node* n2 = new Node(13);
    Node* n3 = new Node(14);
    Node* n4 = new Node(20);
    Node* n5 = new Node(60);

    root->first_child = n2;
    root->second_child = n3;
    root->third_child = n4;
    root->first_child->first_child = n5;

    // accessing the three elements

    cout<<root->data;
    cout<<root->first_child->data;
    cout<<root->second_child->data;
    cout<<root->third_child->data;
    cout<<root->first_child->first_child->data;


    return 0;
}