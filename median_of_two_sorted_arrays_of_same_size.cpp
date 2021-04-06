#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr1[n],arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>arr2[i];
    }
    int j=0;
    int i= n-1;
    while(arr1[i]>arr2[j] && j<n && i>=0)
    {
        swap(arr1[i],arr2[j]);
        i--;j++;
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+n);
    cout<<(arr1[n-1]+arr2[0])/2 ;
    return 0;
}