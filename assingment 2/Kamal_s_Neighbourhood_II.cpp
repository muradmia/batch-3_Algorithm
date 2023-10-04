#include<bits/stdc++.h>
using namespace std;
const int N=1e3;
vector<int>adj[N];
bool visited[N];
int dfs(int u)
{
    visited[u]=true;
    int k=1;
    for(int v: adj[u])
    {
        if(!visited[v])
        {
            k+=dfs(v);
        }
    }
    return k;
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
    }
    int k;
    cin>>k;
    int result=dfs(k);
    cout<<result-1<<endl;
    return 0;
}


