#include<iostream>
using namespace std;

struct Node
{
    int data ;
    Node *left,*right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node * insertBST(Node* root,int val)
{
    if (root == NULL)
    {
        return new Node(val); 
    }
    
    if (val < root->data)
    {
        root->left = insertBST(root->left, val);
    }
    else
    {
        root->right = insertBST(root->right, val);
    }
    return root;
}

Node* search_in_BST(Node* root, int key)
{
    if (root->data == key)
    {
        return root;
    }
    // data > key
    if (root->data > key)
    {
        return search_in_BST(root->left,key);
    }
    // data < key
    return search_in_BST(root->right, key);
}
int main()
{
    Node *root =NULL;
    root = insertBST(root,5);
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,2);
    insertBST(root,7);   

    if (search_in_BST(root,7) == NULL)
    {
        cout<<"Key doesn't exists";
    }
    else
    {
        cout<<"Key exists";
    }
    return 0;
}