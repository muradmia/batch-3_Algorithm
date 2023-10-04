#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<pair<int,int>>adj[N];
int main(){

    int n,m;
    cin>>n>>m;

    for(int i=0;i<m;i++){
        int u,v,data;
        cin>>u>>v>>data;
        adj[u].push_back({v,data});
        adj[v].push_back({u,data});
    }

    for(int i=1;i<=n;i++){
        cout<<"List "<<i<<" : ";
        for(auto v : adj[i]){
            cout<<v.first<<" "<<v.second<<" ";
        }
        cout<<endl;
    }
  return 0;
}