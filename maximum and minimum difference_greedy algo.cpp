#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>> n;
    vector<int> arr(n);
    for(auto &i: arr)
    {
        cin>>i;
    }
    sort(arr.begin(),arr.end());
    long long mn = 0, mx=0;
    for (int i = 0; i < (n/2); i++)
    {
        mx += (arr[i+ (n/2)] - arr[i]);
        mn += (arr[2*i + 1] - arr[2*i]); 
    }
    cout<<mn<<" "<<mx;
    return 0;
}