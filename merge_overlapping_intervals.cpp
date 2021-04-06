#include<iostream>
#include<algorithm>
using namespace std;

struct interval
{
    int start,end;
};
bool mycomp(interval a,interval b)
{
    return a.start < b.start;  
}

int main()
{
    int n;
    cin>>n;
    interval arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i].start>>arr[i].end;
    }
    sort(arr,arr+n,mycomp);
    int idx=0;
    for (int i = 1; i < n; i++)
    {
        if (arr[idx].end >= arr[i].start)
        {
            arr[idx].end = max(arr[idx].end ,arr[i].end);
            arr[idx].start = min(arr[idx].start ,arr[i].start);
        }
        else
        {
            idx++;
            arr[idx] = arr[i];
        }    
    }
    
    for (int i = 0; i <= idx; i++)
    {
        cout<<arr[i].start<<" "<<arr[i].end<<endl;
    }
    
    return 0;
}