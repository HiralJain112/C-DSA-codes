#include<iostream>
#include<queue>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n],max_val,min_val,i;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    // default priority queue using max-heap
    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        pq.push((-1)*arr[i]);
    }
    while(k>1)
    {
        pq.pop();
        k-=1;
    }
    cout<<(pq.top())*(-1);
    return 0;
}