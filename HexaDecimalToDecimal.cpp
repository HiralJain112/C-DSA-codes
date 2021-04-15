#include<bits/stdc++.h>
using namespace std;

int HexaDecimalToDecimal(string num)
{
    int ans=0; 
    int x=1;

    int s=num.size();
    for(int i=s-1;i>=0;i--)
    {
        if(num[i]>='0' && num[i]<='9')
        {
            ans+=x*(num[i]-'0');
        }
        else if(num[i]>='A' && num[i]<='F')
        {
             ans+=x*(num[i]-'A'+10);
        }
        x=x*16;
    }
    return ans;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output2.txt","w",stdout);
    #endif
    
    string n;
    cin>>n;

    cout<<HexaDecimalToDecimal(n);
    
    return 0;
}