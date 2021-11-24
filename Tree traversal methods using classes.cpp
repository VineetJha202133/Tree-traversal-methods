#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;

    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }

    void PostOrder(Node *node)
    {
        if(node == NULL)
            return;
    
        PostOrder(node->left);
        PostOrder(node->right);
        cout<<node->data<<" ";
    }
    void InOrder(Node *node)
    {
        if(node == NULL)
            return;
    
        InOrder(node->left);
        cout<<node->data<<" ";
        InOrder(node->right);
    }

  void PreOrder(Node *node)
    {
        if(node == NULL)
            return;

        cout<<node->data<<" ";
        PreOrder(node->left);
        PreOrder(node->right);
    }
};



int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout<<"\nPreOrder Traversal:\n";
    (*root).PreOrder(root);

    cout<<"\nInOrder Traversal:\n";
    (*root).InOrder(root);

    cout<<"\nPostOrder Traversal:\n";
    (*root).PostOrder(root);

    cout<<endl;

    return 0;
}
