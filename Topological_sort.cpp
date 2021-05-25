#include<bits/stdc++.h>
using namespace std;

int main()
{
    int nodes,edges;
    cin>>nodes>>edges;
    int count = 0;
    vector<vector<int>> adjl(nodes);
    vector<int> indeg(nodes,0);
    for (int i = 0; i < edges; i++)
    {
        int x,y;
        cin>>x>>y;
        adjl[x].push_back(y);
        indeg[y]++;
    }
    queue<int> q;
    for (int i = 0; i < nodes; i++)
    {
        if (indeg[i] == 0)
        {
            q.push(i);
        }
    }
    while (!q.empty())
    {
        count++;
        int x = q.front();
        q.pop();
        cout<<x<<" ";
        vector<int> :: iterator it;
        for (auto it : adjl[x])
        {
            indeg[it]--;
            if (indeg[it] == 0)
            {
                q.push(it);
            }   
        }
    }
    return 0;
}