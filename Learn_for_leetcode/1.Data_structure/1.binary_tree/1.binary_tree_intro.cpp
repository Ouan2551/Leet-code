#include <iostream>
using namespace std;
// creat and declare binary tree have 2 way using struct or class
    // 1) strcut
    struct  Node
    {
        int data;
        Node* left, Node* right;
        Node(int key)
        {
            data = key;
            left = nullptr;
            right = nullptr;
        }
    };

    // 2) class
    class Node
    {
    public:
        int data;
        Node* left, * right;
    
        Node(int key) {
            data = key;
            left = nullptr;
            right = nullptr;
        }
    };
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // binary tree => non linear and hierarchical (parent and chile relationship) data structure
    // topmost node call "root", bottom most node call "leaves"
    // every binary tree have 3 part
    // 1) Data, 2) Pointer to the left child 3) Pointer to the right child

    // work with struct
    // Initilize and allocate memory for tree nodes
    Node* firstNode = new Node(2);
    Node* secondNode = new Node(3);
    Node* thirdNode = new Node(4);
    Node* fourthNode = new Node(5);

    // Connect binary tree nodes
    firstNode->left = secondNode; // add to left section
    firstNode->right = thirdNode; // add to right section
    secondNode->left = fourthNode;

    // Terminologies in binary tree
    // Nodes => fundamental of binary tree each node contain "data and link" to two child node
    // Root => top most of binary tree 
    // Parent node => have children node but maximum is <= 2
    // Child node => out from another node
    // Left node => not have children node or null
    // Internal node => node have at least one child (all node except root and left node)
    // Depth of a node => 
    return 0;
}