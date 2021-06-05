#include<bits/stdc++.h>
using namespace std;

int maximumProduct(int nums[],int n) 
{
    int maxProduct = INT_MIN;
    for(int i = 0 ; i < n-2; i++) 
    {
        for(int j = i + 1 ; j < n-1; j++) 
        {
            for(int k = j + 1 ; k < n; k++) 
            {
                tripletProduct = nums[i] * nums[j] * nums[k] ;
                maxProduct = max(maxProduct, tripletProduct) ;
            }
        }
    }
    return maxProduct;
}
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i= 0 ;i<n; i++)
  {
      cin>>arr[i];
  }
  cout<<maximumProduct(arr, n);
  return 0;
}
