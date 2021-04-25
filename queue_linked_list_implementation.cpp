#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
class queue{
     node *front,*rear;
     public:
     queue()
     {
         front = NULL;
         rear = NULL;
     }
     void push(int x)
     {
         node *newnode = new node(x);
         if (front == NULL)
         {
             rear = newnode;
             front = newnode;
             return ;
         }
         rear -> next = newnode;
         rear = newnode;
     }
     void pop()
     {
         if (front == NULL)
         {
             cout<<"Queue underflow"<<endl;
             return;
         }
         node * nodetodelete = front;
         front = front -> next;
         delete nodetodelete;      
     }
     int peek()
     {
         if (front == NULL)
         {
             cout<<"Queue is empty"<<endl;
             return -1;
         }
         return front->data;
     }
     bool empty()
     {
         if (front == NULL)
         {
             return true;
         }
         return false;
     }
};
int main()
{
     queue q;
     q.push(1); 
     q.push(2);
     q.push(3);
     q.push(4);

     cout<<q.peek()<<endl;
     q.pop();
     cout<<q.peek()<<endl;
     q.pop();
     cout<<q.peek()<<endl;
     q.pop();
     cout<<q.peek()<<endl;
     q.pop();
     cout<<q.peek()<<endl;
     
    return 0;
}