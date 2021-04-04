#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void reverse(int arr[],int n)
{
    int start = 0;
    int end=n-1;
    while(start<=end)
    {
        swap(&arr[start],&arr[end]);
        start+=1;
        end-=1;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    reverse(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}