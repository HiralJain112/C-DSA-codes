#include<bits/stdc++.h>
using namespace std;

bool iscycle(int src,vector<vector<int>>& adj, vector<bool> &visited, int parent)
{
    visited[src] = true;
    for(auto i: adj[src])
    {
        if (i != parent)
        {
            if (visited[i])
            {
                 return true;
            }
            if(!visited[i] and iscycle(i, adj,visited, src))
            {
                return true;
            } 
        }
    }
    return false;
}
int main()
{
    int nodes,edges;
    cin>>nodes>>edges;
    vector<vector<int>>  adj(nodes);
    for (int i = 0; i < edges; i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    bool cycle = false;
    vector<bool> visited(nodes,false);
    for (int i = 0; i < nodes; i++)
    {
        if (!visited[i] and iscycle(i,adj,visited,-1))
        {
            cycle = true;
        }
    }
    if (cycle)
    {
        cout<<"Cycle is present";
    }
    else
    {
        cout<<"Cycle is not present";
    }
    
    return 0;
}