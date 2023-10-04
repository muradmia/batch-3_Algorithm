#include<bits/stdc++.h>
using namespace std;
const int n = 1e3+5;
vector<int>adj[n];
bool visited[n];
int level[n];

void bfs(int u){
  queue<int>q;
  q.push(u);
  visited[u] = true;

  while(!q.empty()){
    int d = q.front();
    q.pop();
    cout<<"Visiting Node : "<<d<<endl;
    for(auto v :adj[d]){
      if(visited[v] == true)continue;
      q.push(v);
      visited[v] = true;
      level[v] = level[u]+1;
    }
  }

}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bfs(1);
 
  return 0;
}