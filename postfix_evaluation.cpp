#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

int postfixEvaluation(string str)
{
    stack<int> stk;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i]>='0' && str[i]<='9')
        {
            stk.push(str[i]-'0');
        }
        else
        {
            int op2 = stk.top();
            stk.pop();
            int op1 = stk.top();
            stk.pop();

            switch(str[i])
            {
                case '+':
                    stk.push(op1 + op2);
                    break;
                case '-':
                    stk.push(op1 - op2);
                    break;
                case '*':
                    stk.push(op1 * op2);
                    break;
                case '/':
                    stk.push(op1 / op2);
                    break;
                case '^':
                    stk.push(pow(op1 , op2));
                    break;                   
            }

        }
    }
    return stk.top();
}

int main()
{
    cout<<postfixEvaluation("46+2/5*7+")<<endl;
    return 0;
}