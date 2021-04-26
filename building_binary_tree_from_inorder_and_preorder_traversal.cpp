#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node*left;
    struct node*right;

    node( int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int search(int inorder[],int start,int end,int curr)
{
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == curr)
        {
            return i;
        }    
    }
    return -1; 
}
node * buildTree(int preorder[],int inorder[],int start,int end)
{
     static int idx = 0;
     if (start > end)
     {
         return NULL;
     }
     int curr = preorder[idx];
     idx++;
     node* n1 = new node(curr);
     if (start == end)
     {
         return n1;
     }
     int pos = search(inorder,start,end,curr);
     n1->left = buildTree(preorder, inorder, start, pos-1);
     n1->right = buildTree(preorder, inorder, pos+1, end);

    return n1;
}

void inorderPrint(node* root)
{
    if (root == NULL)
    {
        return;
    }
    
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}
int main()
{
    int  preorder[] = {1,2,4,3,5};
    int  inorder[] = {4,2,1,5,3};

    //build tree
    node* root = buildTree(preorder, inorder, 0, 4);
    inorderPrint(root);
    return 0;
}