#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
int adj[N][N];
int main(){

    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u][v] = 1;
        //adj[v][u] = 1; Undirect graph
    }

    for(int i=0;i < n;i++){
        //cout<<"List "<<i<<" : ";
        for(int j=0;j<m;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
 
  return 0;
}