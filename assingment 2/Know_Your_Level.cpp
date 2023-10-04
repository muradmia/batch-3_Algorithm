#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>adj[N];
bool visited[N];
int level[N];
void bfs(int s)
{
    queue<int>q;
    q.push(s);
    visited[s]=true;
    level[s]=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();

        for(int v: adj[u])
        {
            if(!visited[v])
            {
                q.push(v);
                visited[v]=true;
                level[v]=level[u]+1;
            }
            
        }
    }
}
int main()
{
    for(int i=0;i<N;i++)
    {
        level[i]=-1;
    }
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(0);
    int d;
    cin>>d;

    bool flag=false;
    vector<int>v;
    for(int i=0;i<N;i++)
    {
        if(level[i]==d)
        {
            v.push_back(i);
            flag=true;
        }  
    }
    if(flag)
    {
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" "; 
        }
    }
    else
    {
        cout<<"-1"<<endl;
    }
    return 0;
}