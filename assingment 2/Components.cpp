#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;
vector<int>adj[N];
bool visited[N];
void dfs(int u,int& c)
{
    visited[u]=true;
    c++;
    for(int v: adj[u])
    {
        if(!visited[v]) dfs(v,c);
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int c;
    vector<int>val;
    for(int i=0;i<N;i++)
    {
        if(!visited[i])
        {
            c=0;
            dfs(i,c);
            if(c>1)
            {
                val.push_back(c);
            }

        }
    }
    sort(val.begin(),val.end());
    
    for(int count: val)
    {
        cout<<count<<" ";
    }
    
    return 0;
}