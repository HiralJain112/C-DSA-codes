#include<iostream>
#include<stack>
using namespace std;

int precedence(char c)
{
    if (c == '^')
    {
        return 3;
    }
    else if (c=='*' || c=='/')
    {
        return 2;
    }
    else if (c=='+' || c=='-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

string infix_to_postfix(string str)
{
    stack<char> stk;
    string res;
    for (int i = 0; i < str.length(); i++)
    {
        if ((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            res += str[i];
        }
        else if( str[i] == '(')
        {
            stk.push(str[i]);
        }
        else if (str[i] == ')')
        {
            while (!stk.empty() && stk.top()!='(')
            {
                res += stk.top();
                stk.pop();
            } 
            if (!stk.empty())
            {
                stk.pop();
            }   
        }
        else
        {
            while (!stk.empty() && (precedence(stk.top())>precedence(str[i])))
            {
                res += stk.top();
                stk.pop();
            }
            stk.push(str[i]);
        }
    }
    while (!stk.empty())
    {
        res += stk.top();
        stk.pop();
    }
    return res;
}

int main()
{
    cout<<infix_to_postfix("(a-b/c)*(a/k-l)")<<endl;
    return 0;
}