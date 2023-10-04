#include<bits/stdc++.h>
using namespace std;
const int N = 13e+5;
vector<int>vec[N];
bool visited[N];
int dis[N];
void bfs(int sur){
    queue<int>q;
    q.push(sur);
    visited[sur] = true;
    dis[sur] = 0;
    while(!q.empty()){
        int par = q.front();
        q.pop();
        cout<<par<<endl;
        for(auto v : vec[par]){
            int child = v;
            if(visited[child] == false){
                q.push(child);
                dis[child] = dis[par]+1;
                visited[child] = true;
            }
        }
    }

}
int main(){
    int n,e;
    cin>>n>>e;
    while(e--){
        int u,v;
        cin>>u>>v;
        vec[u].push_back(v);
        vec[v].push_back(u);
    }

    bfs(1);
    for(int i = 0;i <= n;i++){
        cout<<"Node : "<<i<<" : "<<dis[i]<<endl;
    }

 
  return 0;
}