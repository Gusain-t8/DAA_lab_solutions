#include<bits/stdc++.h>
using namespace std;

bool dfs(vector<vector<int>>& adj,int source,int dest,vector<int>& visit)
{
    if(source==dest)
    return true;

    if(visit[source]==1) //no self loop
    return false;

    visit[source]=1;


    for(auto it : adj[source])
    {
       if(dfs(adj,it,dest,visit))
       return true; 
    }
    return false;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> adj(n);
    vector<int> visit(n,-1);
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int src,dest;
    cout<<"Enter source and destination :";
    cin>>src>>dest;

    if(dfs(adj,src,dest,visit))
    cout<<"Path exist";
    else
    cout<<"path does not exist\n";

return 0;

}
