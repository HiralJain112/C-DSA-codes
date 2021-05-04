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
//inorder
void inorder(Node *root)
{
    if (root == NULL)
    {
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
//find out inorder successor
Node* inorderSucc(Node* root)
{
    Node* curr = root;
    while (curr && curr->left !=NULL)
    {
        curr = curr -> left;
    }
    return curr;
}
//Delete in BST
Node * Delete_in_BST(Node* root,int key)
{
    if (key < root->data)
    {
        root->left = Delete_in_BST(root->left, key);
    }
    else if(key > root-> data)
    {
        root->right = Delete_in_BST(root->right, key);
    }
    else
    {
        if (root->left == NULL)
        {
            Node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            free(root);
            return temp;
        }
        //when node has two children
        Node * temp = inorderSucc(root->right);
        root -> data = temp ->data;
        root -> right = Delete_in_BST(root->right,temp->data);
    }
    return root;
}
int main()
{
    Node *root =NULL;
    root = insertBST(root,4);
    insertBST(root,2);
    insertBST(root,5);
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,6);   
    
    inorder(root);
    cout<<endl;
    root = Delete_in_BST(root,5);
    inorder(root);
    cout<<endl;
    root = Delete_in_BST(root,2);
    inorder(root);
    return 0;
}