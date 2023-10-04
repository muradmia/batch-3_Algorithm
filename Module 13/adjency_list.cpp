#include<bits/stdc++.h>
using namespace std;
const int N = 13e+5;
vector<int>adj[N];
int main(){

    int n,e;
    cin>>n>>e;
    while(e--){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i = 0;i <= n;i++){
        cout<<"index i :"<<i<<" : ";
        for(auto v : adj[i]){
            cout<<v<<" ";
        }
        cout<<endl;
    }
 
  return 0;
}