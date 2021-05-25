#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+2;
bool visited[N];//visited array
vector<int> adjl[N];
int main()
{
    for(int i=0; i<N; i++)
    {
        visited[i] = 0;
    }
    int nodes,edges;
    cin>>nodes>>edges;
    for (int i = 0; i < edges; i++)
    {
        int x,y;
        cin>>x>>y;

        adjl[x].push_back(y);
        adjl[y].push_back(x);
    }
    queue<int> q;
    q.push(1);
    visited[1] = true;
    while (!q.empty())
    {
         int node = q.front();

         q.pop();
         cout<<node<<endl;

         vector<int> :: iterator it;
         for (it = adjl[node].begin(); it != adjl[node].end(); it++)
         {
             if (!visited[*it])
             {
                 visited[*it] = 1;
                 q.push(*it);
             }
         }   
    }
    return 0;
}