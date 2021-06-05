#include<bits/stdc++.h>
using namespace std;
int maxSubArrayProduct(int[] arr, int size) {
    int maxProduct = INT_MIN;
    for(int i=0 to i < size){
        localProduct = 1;
        for(int j=i to j < size){
            localProduct = localProduct * arr[j];
        }
        maxProduct = max(maxProduct, localProduct);
    }
    return maxProduct;
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
  cout<<maxSubArrayProduct(arr,n);
  return 0;
}
