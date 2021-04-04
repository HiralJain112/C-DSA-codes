#include<iostream>
using namespace std;
void union_fun(int arr1[],int arr2[],int n1,int n2)
{
     int i=0,j=0;
     while((i < n1) && (j < n2))
     {
         if(arr1[i] < arr2[j])
         {
             cout<<arr1[i]<<" ";
             i++;
         }
         else if(arr2[j] < arr1[i])
         {
             cout<<arr2[j]<<" ";
             j++;
         }
         else
         {
             cout<<arr2[j]<<" ";
             j++;i++;
         }
         
     } 
     while (i < n1)
     {
         cout<<arr1[i]<<" ";
         i++;
     }
     while (j < n2)
     {
         cout<<arr2[j]<<" ";
         j++;
     }
}
void intersection_fun(int arr1[],int arr2[],int n1,int n2)
{
     int i = 0 ,j = 0;
     while ((i<n1) && (j<n2))
     {
         if (arr1[i] < arr2[j])
         {
             i++;
         }
         else if(arr2[j] < arr1[i])
         {
             j++;
         }
         else
         {
             cout<<arr1[i]<<" ";
             i++;j++;
         }
     }
}
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
    union_fun(arr1,arr2,n1,n2);
    cout<<endl;
    intersection_fun(arr1,arr2,n1,n2);
    return 0;
}