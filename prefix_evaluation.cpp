#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

int prefixEvaluation(string str)
{
    stack<int> stk;

    for (int i = str.length()-1; i >= 0; i--)
    {
        if (str[i]>='0' && str[i]<='9')
        {
            stk.push(str[i]-'0');
        }
        else
        {
            int op1 = stk.top();
            stk.pop();
            int op2 = stk.top();
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
    cout<<prefixEvaluation("-+7*45+20")<<endl;
    return 0;
}