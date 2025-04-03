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

    
    return 0;
}