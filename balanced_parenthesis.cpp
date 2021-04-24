#include<iostream>
#include<stack>
using namespace std;

bool is_valid(string str)
{
     int n = str.size();
     stack<char> stk;
     bool ans = true;
     for (int i = 0; i < n; i++)
     {
         if (str[i] == '{' or str[i] == '(' or str[i] == '[')
         {
             stk.push(str[i]);
         }
         else if (str[i] == ')')
         {
             if (!stk.empty() && stk.top() == '(')
             {
                 stk.pop();
             }
             else
             {
                 ans = false;
                 break;
             }
         }
         else if (str[i] == ']')
         {
             if (!stk.empty() && stk.top() == '[')
             {
                 stk.pop();
             }
             else
             {
                 ans = false;
                 break;
             }
         }
         else if (str[i] == '}')
         {
             if (!stk.empty() && stk.top() == '{')
             {
                 stk.pop();
             }
             else
             {
                 ans = false;
                 break;
             }
         }
     }
     if (!stk.empty())
     {
         return false;
     }
     
     return ans;
}

int main()
{
    string str = "{([)}";

    if (is_valid(str))
    {
        cout<<"Valid String"<<endl;
    }
    else
    {
        cout<<"Invalid string"<<endl;
    }
    return 0;
}