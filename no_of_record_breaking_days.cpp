#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n,count,mx;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    count=0;
    mx=INT_MIN;
    for (int i = 0; i < n-1; i++)
    {
        mx=max(mx,arr[i]);
        if(arr[i]==mx &&arr[i]>arr[i+1])
        {
            count++;
        }
    }
    if(arr[n-1]==mx || arr[0]==mx)
    {
        count++;
    }
    cout<<count;
    return 0;
}