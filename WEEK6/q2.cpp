#include<bits/stdc++.h>
using namespace std;

bool bipartitedfs(vector<vector<int>>& graph,int node,int color[])
{
    if(color[node]==-1) color[node]=1;


    for(auto it : graph[node])
    {
        if(color[it]==-1)
        {
            color[it]=1-color[node];
           if(!bipartitedfs(graph,it,color))
            return false; 
        }
        else if(color[it]==color[node])
        return false;
      
    }
    return true;
}
void checkBipartite(vector<vector<int>>& graph,int n)
{
    int color[n],flag=1;
    memset(color,-1,sizeof color);

    for(int i=0;i<n;i++)
    {
        if(color[i]==-1)
        {
            if(!bipartitedfs(graph,i,color))
            flag=0;
        }
    }
    if(flag==1)
    cout<<"Graph is Bipartite";
    else
    cout<<"Graph is not Bipartite";
}
int main()
{
    int n=0,m=0;
    cin>>n>>m;
    vector<vector<int>> adj(n);
    
    for(int i=0;i<m;i++)
    {
        int u=0,v=0;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

   checkBipartite(adj,n);
   
   
return 0;

}
