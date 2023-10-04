#include<bits/stdc++.h>
using namespace std;
const int N=1e5+7;
vector<int>adj[N];
bool visited[N];
int Level[N];

void bfs(int s)
{ 
    queue<int>q; 
    q.push(s);
    visited[s]=true;
    Level[s]=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        
        for(int v: adj[u])
        {
            if(visited[v]) continue;
            q.push(v);
            visited[v]=true;
            Level[v]=Level[u]+1;
        }
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
    int x;
    cin>>x;
    while(x--)
    {
        int f,d;
        cin>>f>>d;
        bfs(f);
        if(visited[d]) cout<<Level[d]<<endl;
        else cout<<"-1"<<endl;
        for(int i=0;i<N;i++)
        {
            visited[i]=0;
            Level[i]=0;
        }
    }
    return 0;
}