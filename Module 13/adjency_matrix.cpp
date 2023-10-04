#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
int adj[N][N];
int main(){

    int node,edge;
    cin>>node>>edge;


    for(int i = 0;i <= node;i++){
        for(int j = 0;j <= node;j++){
            adj[i][j] = 0;
            if(i == j){
                adj[i][j] = 1;
            }
        }
        //cout<<endl;
    }

    for(int i = 0;i <= node;i++){
        for(int j = 0;j <= node;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<edge;i++){
        int u,v;
        cin>>u>>v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    cout<<endl;

    for(int i = 0;i <= node;i++){
        for(int j = 0;j <= node;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
 
  return 0;
}