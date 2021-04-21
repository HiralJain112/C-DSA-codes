#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int n)
{
     for (int i = 2; i <= sqrt(n); i++)
     {
         if(n%i==0)
         {
             return false;
         }
     }
     return true;
}
int main()
{
    int n;
    cin>>n;
    int temp=n;
    int i=2;

    while (i<=temp)
    {
        if(isPrime(i))
        {
             if (temp%i==0)
             {
                 cout<<i<<" ";
                 temp/=i;
             }
             else
             {
                 i++;
             }
             
        }
        else
        {
            i++;
        }
        
    }
    return 0;
}