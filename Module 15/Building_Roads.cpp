#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int>gp[N];
bool vis[N];
void dfs(int s){
    vis[s] = true;
    for(auto v : gp[s]){
        if(!vis[v]){
            dfs(v);
        }
    }
}
int main(){

    int n, e;
    cin>>n>>e;
    while(e--){
        int u,v;
        cin>>u>>v;
        gp[u].push_back(v);
        gp[v].push_back(u);
    }
    vector<int>ans;
    for(int i = 1;i <= n;i++){
        if(!vis[i]){
            dfs(i);
            ans.push_back(i);
        }
    }
    cout<<ans.size()-1<<endl;
    for(int i = 0;i < ans.size()-1;i++){
        cout<<ans[i]<<" "<<ans[i+1]<<endl;
    }
 
  return 0;
}