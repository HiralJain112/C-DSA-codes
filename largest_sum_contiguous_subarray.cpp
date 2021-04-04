#include<iostream>
#include<climits>
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
    // This program is implemented using kadane's algorithm
    int max_sum= INT_MIN , max_till_here = 0;
    for (int i = 0; i < n; i++)
    {
        max_till_here += arr[i];
        max_sum = max(max_sum , max_till_here);

        if (max_till_here < 0)
        {
            max_till_here = 0;
        }       
    }
    cout<<max_sum;    
    return 0;
}