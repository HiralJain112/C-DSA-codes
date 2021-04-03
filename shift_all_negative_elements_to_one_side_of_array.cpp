#include<iostream>
using namespace std;

void shift(int arr[],int left ,int right)
{
    while(left <= right)
    {
        if (arr[left]<0 && arr[right]<0)
        {
            left++;
        }
        else if(arr[left]>0 && arr[right]<0)
        {
            swap(arr[left],arr[right]);
            left++; right--;
        }
        else if(arr[left]>0 && arr[right]>0)
        {
            right--;
        }
        else
        {
            left++;
            right--;
        }
        
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    shift(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}