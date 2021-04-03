//**************Method 1***************//
/*
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
    sort(arr,arr+n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/
//*************Method 2***************//
/*
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n], count_0 = 0, count_1 = 0, count_2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if (arr[i]==0)
        {
            count_0 ++;
        }
        else if(arr[i]==1)
        {
            count_1 ++;
        }
        else
        {
            count_2 ++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (count_0 > 0)
        {
            arr[i] = 0;
            count_0 --;
        }
        else if(count_1 > 0)
        {
            arr[i] = 1;
            count_1 --;
        }
        else
        {
            arr[i] = 2;
            count_2--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }   
    return 0;
}
*/

//**************Method 3************//
#include<iostream>
using namespace std;

void sort_array(int arr[],int n)//n is the size of the array
{
    int low = 0 ,mid = 0 ,high = n-1;
    while(mid <= high)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[low],arr[mid]);
            low++;mid++;    
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[mid],arr[high]);
            high--;
            break;        
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
    sort_array(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}