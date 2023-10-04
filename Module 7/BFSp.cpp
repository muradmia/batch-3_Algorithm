#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
vector<int>adj[N];
bool visited[N];
int level[N];

void bfs(int u){
    queue<int>q;
    q.push(u);
    visited[u] = true;

    while(!q.empty()){
        int d =  q.front();
        q.pop();
        //section 1:
        cout<<"visiting node : "<<d<<endl;
        for(int data : adj[d]){
            //section 2:
            if(visited[data] == true) continue;
            q.push(data);
            visited[data] = true;
            //section 
            level[data] = level[d]+1;
        }
    }
}
int main(){


    int n,m;
    cin>>n>>m;
    for(int i = 0;i < m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    bfs(1);
 
    for(int i = 1;i <= n;i++){
        cout<<"level : "<<level[i]<<endl;
    }
  return 0;
}