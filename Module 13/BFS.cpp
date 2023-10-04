#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> adj[N];
bool visited[N];
void dfs(int i){
    visited[i] = true;
    cout<<i<<endl;
    for(auto v : adj[i]){
        int c = v;
        if(visited[c] == true) continue;
        else{
            dfs(c);
        }
    }
}
int main(){

    int  n,e;
    cin>>n>>e;
    for(int i = 0; i < e; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1);
 
  return 0;
}