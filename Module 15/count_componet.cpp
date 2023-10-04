#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int>gp[N];
vector<int>v;
int dis[N];
bool vis[N];
void dfs(int s){
    vis[s] = true;
    v.push_back(s);
    for(auto v : gp[s]){
        if(!vis[v]){
            dfs(v);
        }
    }
}
int main(){

    int n,e;
    cin>>n>>e;
    while(e--){
        int u,v;
        cin>>u>>v;
        gp[u].push_back(v);
        gp[v].push_back(u);
    }
    int cnt = 0;

    //dfs(1);
    for(int i = 1;i <= n;i++){
        if(!vis[i]){
            cnt++;
            dfs(i);
            for(int val : v){
                cout<<val<<" ";
            }
            cout<<endl;
            v.clear();
        }
    }

    cout<<cnt<<" ";

 
  return 0;
}