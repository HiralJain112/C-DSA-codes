#include<bits/stdc++.h>
using namespace std;

int main()
{
    int nodes,edges;
    cin>>nodes>>edges;
    int adjm[nodes][nodes];
    for (int i = 0; i < nodes; i++)
    {
        for (int j = 0; j < nodes; j++)
        {
            adjm[i][j] = 0;   
        }
    }
    for (int i = 0; i < edges; i++)
    {
        int x,y;
        cin>>x>>y;

        adjm[x-1][y-1] = 1;
        adjm[y-1][x-1] = 1;
    }
    cout<<"adjacency matrix:"<<endl;
    for (int i = 0; i < nodes; i++)
    {
        for (int j = 0; j < nodes; j++)
        {
            cout<<adjm[i][j]<<" ";   
        }
        cout<<endl;
    }
    cout<<endl;
    // Adjacency list
    
    cin>>nodes>>edges;
    vector<int> adjl[nodes];
    for (int i = 0; i < edges; i++)
    {
        int x,y;
        cin>>x>>y;

        adjl[x-1].push_back(y);
        adjl[y-1].push_back(x);
    }
    cout<<"Adjacency List:"<<endl;
    for (int i = 0; i < nodes; i++)
    {
        cout<<i+1<<" -> ";
        for (int x : adjl[i])
        {
            cout<<x<<",";
        }
        cout<<endl;
    }
    
    return 0;
}