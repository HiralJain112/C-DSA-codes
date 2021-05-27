#include<bits/stdc++.h>
using namespace std;

vector<bool> visited;
int nodes,edges;
vector<vector<int>> adj;
vector<int> components;

int get_comp(int idx)
{
    if (visited[idx])
    {
        return 0;
    }
    visited[idx] = true;
    int ans = 1;
    for(auto i: adj[idx])
    {
        if (!visited[i])
        {
            ans += get_comp(i);
            visited[i] = true;
        }
    }
    return ans;
}
int main()
{
    cin>>nodes>>edges;
    adj = vector<vector<int>>(nodes);
    visited = vector<bool>(nodes);
    for (int i = 0; i < edges; i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for (int i = 0; i < nodes; i++)
    {
        if (!visited[i])
        {
             components.push_back(get_comp(i));
        }
    }
    for (auto i: components)
    {
        cout<<i<<" ";
    }
    
    return 0;
}