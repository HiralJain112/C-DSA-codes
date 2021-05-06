#include<iostream>
using namespace std;

int smallestSubarray_withSum(int arr[],int n,int x)
{
    int sum = 0,minLength = n+1,start = 0,end = 0;
    while (end < n)
    {
        while (sum <= x && end < n)
        {
            sum += arr[end++];
        }
        while (sum > x && start < n)
        {
            if ((end- start) < minLength)
            {
                minLength = end - start;
            }
            sum -= arr[start++];
        }
    }
    return minLength;
}

int main()
{
    int arr[] = {1, 4, 45, 6, 10, 19};
    int x = 51;
    int n = sizeof(arr)/sizeof(int);

    int minLength = smallestSubarray_withSum(arr,n,x);
    if (minLength == (n+1))
    {
        cout<<"No such subarray exists";
    }
    else
    {
        cout<<"smallest subarray length is: "<<minLength;
    }
    

    return 0;
}