#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
int adjmat[N][N];
int main(){

    int n,m;
    cin>>n>>m;

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adjmat[u][v] = 1;
        adjmat[v][u] = 1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<adjmat[i][j]<<" ";
        }
        cout<<endl;
    }
 
  return 0;
}