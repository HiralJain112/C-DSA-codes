#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>&stk,int ele)
{
    if (stk.empty())
    {
       stk.push(ele);
       return; 
    }

    int top_ele = stk.top();
    stk.pop();
    insertAtBottom(stk,ele);

    stk.push(top_ele);
}

void reverse(stack<int> &stk)
{
    if (stk.empty())
    {
        return;
    }
    int ele = stk.top();
    stk.pop();
    reverse(stk);
    insertAtBottom(stk,ele);
}

int main()
{
    stack<int> stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);

    reverse(stk);
    while (!stk.empty())
    {
        cout<<stk.top()<<endl;
        stk.pop();
    }
    
    return 0;
}
