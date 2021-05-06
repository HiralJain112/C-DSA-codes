#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *left,*right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* sortedArray_to_BST(int arr[],int low,int high)
{
    if (low > high)
    {
        return NULL;
    }
    
    int mid= (low + high)/2;
    Node *root = new Node(arr[mid]);

    root->left = sortedArray_to_BST(arr,low,mid-1);
    root->right = sortedArray_to_BST(arr,mid +1,high);

    return root;
}
void preorderPrint(Node * root)
{
    if(root==NULL)
    {
        return ;
    }
    cout<<root->data<<" ";
    preorderPrint(root->left);
    preorderPrint(root->right);
}
int main()
{
    int arr[] = {10,20,30,40,50};
    Node * root =sortedArray_to_BST(arr,0,4);
    preorderPrint(root);

    return 0;
}