#include<bits/stdc++.h>
using namespace std;
class Edge{
    public:
        int u,v,w;
        Edge(int u,int v,int w){
            this->u = u;
            this->v = v;
            this->w = w;
        }
};
int main(){
    int n,e;
    cin >> n >> e;
    vector<Edge>va;
    while (e--)
    {
        int u,v,w;
        cin >> u >> v >> w;
        Edge ed(u,v,w);
        va.push_back(ed);
    }
    int dist[n+1];
    for(int i = 1;i <=n;i++){
        dist[i] = INT_MAX;
    }
    dist[1] = 0;

    for(int i = 1;i <=n-1;i++){
        for(auto ed : va){
            int u = ed.u;
            int v = ed.v;
            int w = ed.w;

            if(dist[u]+w < dist[v]){
                dist[v] = dist[u]+w;
            }
        }
    }

    bool cycle = false;
    for(auto ed : va){
         int u = ed.u;
        int v = ed.v;
        int w = ed.w;
        if(dist[u]+w < dist[v]){
            cycle = true;
            break;
            dist[v] = dist[u]+w;
        }
    }

    if(cycle){
        cout<<"Cycle Exist"<<endl;
    }else{
        for(int i = 1;i <= n;i++){
            cout<<"Node : "<<dist[i]<<endl;
        }
    }
 
  return 0;
}