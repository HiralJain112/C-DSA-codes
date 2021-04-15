#include<iostream>
using namespace std;

class node
{
    public:
       int data;
       node* next;

       node(int val)//parametrized constructor
       {
           data=val;
           next=NULL;
       }
};
//insertion of nodes
void insertAtTail(node* &head , int val ){
    node* node1 = new node(val);
    if (head==NULL)
    {
        head = node1;
        return;
    }
    
    node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    
    temp -> next = node1;
}

void display(node* head)//displaying linked list
{
    node* temp = head;
    while (temp != NULL)
    {
        cout<<temp -> data<<"->";
        temp = temp -> next;
    }
    cout<<"NULL"<<endl;
}
void insertAtHead(node* &head, int val){//insert at head
     node* node1 = new node(val);
     node1 -> next =head;
     head = node1;
}
/*
bool search(node* head, int key)
{
     node* temp = head;
     while (temp != NULL)
     {
         if (temp -> data == key)
         {
             return true;
         }
         temp = temp -> next;
     }
      return false;
}
*/

//delete
void deleteAtHead(node* &head)
{
    node* todelete = head;
    head = head -> next;

    delete todelete;//used to free the todelete pointer
}
void deletion(node* &head, int val)
{
    if (head == NULL)
    {
        return;
    }
    if (head -> next == NULL)//only one node is present in the linked list
    {
        deleteAtHead(head);
        return;
    }
    
    node* temp = head;
    while ((temp->next)->data != val)
    {
        temp = temp -> next;
    }
    node* todelete = temp -> next;
    temp -> next = (temp -> next) -> next;
    
    delete todelete;
}
int main()
{
    node* head = NULL;
    insertAtTail(head,3);
    insertAtTail(head,15);
    insertAtTail(head,24);
    //display
    display(head);

    insertAtHead(head,1);
    insertAtHead(head,2);
    
    display(head);
     
    //search 
    //cout<<search(head,2);

    //deletion
    deletion(head,15);
    display(head);
    deleteAtHead(head);
    display(head);
    deletion(head,24);
    display(head);
    return 0;
}