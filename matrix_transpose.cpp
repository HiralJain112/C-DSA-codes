#include<iostream>
using namespace std;

int main()
{
    //for a square matrix
    int n;
    cin>>n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            //swap
            int temp;
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}