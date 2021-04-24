#include<iostream>
using namespace std;
# define n 20
class queue
{
    int *arr;
    int front,rear;

    public:
    queue()
    {
        arr = new int [n];
        front =-1;
        rear =-1;
    }
    void push(int x)
    {
        if (rear == n-1)
        {
            cout<<"Queue overflow"<<endl;
            return;
        }
        rear++;
        arr[rear] = x;

        if (front == -1)
        {
            front++;
        }
        
    }
    void pop()
    {
        if ((front == -1) or (front > rear))
        {
            cout<<"Queue is empty"<<endl;
            return ;
        }
        front++;
    }
    int peek()
    {
         if ((front == -1) or (front > rear))
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[front];
    }
    bool empty()
    {
       if ((front == -1) or (front > rear))
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
    return 0;
}