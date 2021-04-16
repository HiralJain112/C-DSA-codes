#include<iostream>
using namespace std;

class node
{
    public:
        int data;
        node* prev;
        node* next;

        node(int val)
        {
            data = val;
            prev = NULL;
            next = NULL;
        }
};
void insertAtHead(node* &head,int val)
{
    node* node1 = new node(val);

    node1->next = head;
    if (head!=NULL)
    {
        head->prev = node1;
    }
    head= node1;
}
void display(node* head)
{
    node* temp = head;
    cout<<"NULL->";
    while (temp != NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void insertAtTail(node* &head,int val)
{
    if (head==NULL)
    {
        insertAtHead(head,val);
        return;
    }
    

    node* node1 = new node(val);
    node* temp = head; 

    while (temp -> next != NULL)
    {
        temp = temp->next;
    }
    temp->next = node1;
    node1->prev = temp;
}
void deleteAtHead(node* &head)
{
    node* todelete = head;
    head = head -> next;
    head -> prev = NULL;

    delete todelete;//we will free the pointer when it is no needed
}
void deletion(node* &head,int pos)
{
    if (pos==1)
    {
        deleteAtHead(head);
        return;
    }
    
    node* temp = head;
    int count=1;
    while (temp!=NULL && count!=pos)
    {
        temp = temp -> next;
        count++;
    }
    (temp -> prev) -> next = temp -> next;
    if (temp->next!=NULL)//when we want to delete last node, the since last node is pointing
    {                    //to NULL :> it doesn't have any next
        (temp -> next) -> prev = temp -> prev;
    }
    delete temp;
}
int main()
{
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    insertAtHead(head,5);
    display(head);
    
    deletion(head,5);
    display(head);
    deleteAtHead(head);
    display(head);
    return 0;
}