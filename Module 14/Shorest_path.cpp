#include<bits/stdc++.h>
using namespace std;
const int N = 13e+5;
vector<int>gp[N];
int dis[N];
bool vis[N];
int par[N];
void bfs(int s){
    queue<int>q;
    q.push(s);
    dis[s] = 0;
    vis[s] = true;
    par[s] = -1;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        for(auto v : gp[parent]){
            int child = v;
            if(!vis[child]){
                q.push(child);
                par[child] = parent;
                //dis[child] = dis[parent]+1;
                vis[child] = true;
            }
        }     
    }
}
int main(){

    int n,e;
    cin>>n>>e;
    while(e--){
        int u,v,w;
        cin>>u>>v;
        gp[u].push_back(v);
        gp[v].push_back(u);
    }
    bfs(1);
    int d;
    cin>>d;
    vector<int>path;
    if(vis[d]){
        int x = d;
        while(x!=-1){
            path.push_back(x);
            x = par[x];
        }
    }else{
        cout<<"path nai\n";
    }
    reverse(path.begin(),path.end());
    for(auto val : path){
        cout<<val<<" ";
    }
 
  return 0;
}