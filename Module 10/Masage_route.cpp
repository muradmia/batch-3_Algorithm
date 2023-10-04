#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
vector<int>adj[N];
bool visited[N];
//vector<int>level[N];
int level[N];
vector<int> parrant[N];
void bfs(int u){
    queue<int>q;
    q.push(u);
    level[u] = 0;
    visited[u] = true;
    while (!q.empty())
    {
        int d = q.front();
        q.pop();
        
        for(int data : adj[d]){
            if(visited[data] == true) continue;
            q.push(data);
            visited[data] = true;
            parrant[data] = d;
            level[data] = level[d]+1;
        }
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    for(int i = 0; i < m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bfs(1);
    cout<<level[n];
    vector<int>path;
    int cur = n;
    while(cur != -1){
        path.push_back(cur);
        cur = parrant[cur];
    }

    reverse(path.begin(),path.end());

    for(int p : path){
        cout<<p<<" ";
    }
  return 0;
}