#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+2;
bool visited[N];//visited array
vector<int> adjl[N];

void dfs(int node)
{
    //preorder
    visited[node] = 1;
    cout<<node<<" ";

    //inorder
    vector<int> :: iterator it;
    for(it = adjl[node].begin(); it != adjl[node].end(); it++)
    {
         if (visited[*it]);
         else{
                 dfs(*it);     
            }
    }

    //postorder
    //cout<<node<<" ";
}

int main()
{
    int nodes,edges;
    cin>>nodes>>edges;
    
    for (int i = 0; i <= nodes; i++)
    {
        visited[i] = false;
    }
    

    int x,y;
    for (int i = 0; i < edges; i++)
    {
        cin>>x>>y;

        adjl[x].push_back(y);
        adjl[y].push_back(x);
    }
    dfs(1);
    return 0;
}