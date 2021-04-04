#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int arr1[n1],arr2[n2];
    for (int i = 0; i < n1; i++)
    {
        cin>>arr1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin>>arr2[i];
    }
    //********************
    int i=0 , j=0 , k=n1-1 ;

    while(i<=k && j<n2)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            swap(arr2[j],arr1[k]);
            j++; k--;
        }
    }
    sort(arr1, arr1+n1);
    sort(arr2, arr2+n2);
    //********************
    for (int i = 0; i < n1; i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < n2; i++)
    {
        cout<<arr2[i]<<" ";
    }
    return 0;
}