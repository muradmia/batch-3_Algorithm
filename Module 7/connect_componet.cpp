#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
vector<int>adj[N];
bool visited[N];
void dfs(int u){
    visited[u] = true;
    for(int v : adj[u]){
        if(visited[v] == true) continue;
        dfs(v);
    }
}

void bfs(int u){
    queue<int>q;
    q.push(u);
    visited[u] = true;

    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(int data : adj[v]){
            q.push(data);
            visited[data] = true;
        }
    }
}
int main(){

    int n,m;
    cin >> n >> m;
    for(int i = 0; i < m;i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    int cc = 0;

    for(int i = 1;i <= n;i++){
        if(visited[i] == true) continue;
        dfs(i);
        cc++;
    }

    cout<<"Number of connect componet : "<<cc;
 
  return 0;
}