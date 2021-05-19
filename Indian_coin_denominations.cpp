#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int x;
    cin>>x;
    sort(arr,arr+n,greater<int>());

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        count += x/arr[i];
        x -= x/arr[i] * arr[i];
    }
    
    cout<<count;
    return 0;
}