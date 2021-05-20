#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        vector<pair<int,int>> arr(n);

        for(int i = 0; i<n; i++)
        {
            cin>>arr[i].first >> arr[i].second;
        }
        int l,p;
        cin>>l>>p;

        for (int i = 0; i < n; i++)
        {
            arr[i].first = l - arr[i].first; 
        }
        sort(arr.begin(),arr.end());
        int count = 0;
        int curr = p;

        priority_queue<int ,vector<int> > pq;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (curr>= l)
            {
                break;
            }
            while(curr < arr[i].first)
            {
                if(pq.empty())
                {
                    flag = true;
                    break; 
                }
                count++;
                curr += pq.top();
                pq.pop();
            }
            if (flag)
            {
                break;
            }
            pq.push(arr[i].second);
        }
        if (flag)
        {
            cout<<"-1"<<endl;
            continue;
        }
        while(!pq.empty() && curr<l)
        {
            curr += pq.top();
            pq.pop();
            count++;
        }
        if (curr < l)
        {
            cout<<"-1"<<endl;
            continue;
        }
        cout<<count;
    }
    return 0;
}