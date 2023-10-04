#include<bits/stdc++.h>
using namespace std;
//const int N = 13e+5;
class Edge{
    public:
    int u;
    int v;
    int w;

    Edge(int u, int v, int w){
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

int main(){

    int n,e;
    cin>>n>>e;
    vector<Edge> va;
    while(e--){
        int u,v,w;
        cin>>u>>v>>w;
        Edge ed(u, v, w);
        va.push_back(ed);
    }
    int dis[n+1];
    
    for(int i = 1;i <=n;i++){
        dis[i] = INT_MAX;
    }
    dis[1] = 0;

    for(int i = 1;i <=n;i++){
        for(auto ed : va){
            int u = ed.u;
            int v = ed.v;
            int w = ed.w;

            if(dis[u] + w < dis[v]){
                dis[v] = dis[u]+w;
            }
        }
    }

    for(int i = 1;i <= n;i++){
        cout<<"Distance : "<<dis[i]<<endl;
    }
  return 0;
}