#include<iostream>
using namespace std;
int setBit(int n,int pos)
{
    return ((n & (1<<pos))!=0);
}
void unique(int arr[],int n)
{
    int xorsum=0;
    for (int i = 0; i < n; i++)
    {
        xorsum=xorsum^arr[i];
    }
    int setbit=0,pos=0;
    int tempxor=xorsum;
    while (setbit!=1)
    {
        setbit=xorsum & 1;
        pos++;
        xorsum=xorsum>>1;
    }
    int newxor=0;
    for (int i = 0; i < n; i++)
    {
        if (setBit(arr[i],pos-1))
        {
            newxor=newxor^arr[i];
        }
        
    }
    cout<<newxor<<endl;
    cout<<(tempxor^newxor);
    
}
int main()
{
    int arr[]={1,2,3,5,3,1,2,7};
    unique(arr,sizeof(arr)/sizeof(int));
    return 0;
}