#include<bits/stdc++.h>
using namespace std;
const int N  = 1e3+5;
vector<pair<int,int>>gp[N];
int dist[N];
bool visited[N];
int par[N];
void bfs(int s){
    queue<int>q;
    q.push(s);
    dist[s] = 0;
    
}
int main(){

    int n,e;
    cin>>n>>e;
    while(e--){
        int u,v,w;
        cin>>u>>v>>w;
        gp[u].push_back({v,w});
        gp[v].push_back({u,w});
    }

    bfs(1);
  return 0;
}