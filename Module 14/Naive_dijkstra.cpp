#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
vector<pair<int,int>>gp[N];
int dist[N];
void dijkstra(int s){
    queue<int> q;
    q.push(s);
    dist[s] = 0;

    while(!q.empty()) {
        int parent = q.front();
        q.pop();
        for(auto v : gp[parent]){
            int child = v.first;
            int cost  = v.second;

            if(dist[parent]+cost < dist[child]){
                dist[child] = dist[parent]+cost;
                q.push(child);
            }
        }
    }
}
int main(){
    int n,e;
    cin >> n >> e;
    while (e--)
    {
        int u,v,w;
        cin >> u >> v>>w;
        gp[u].push_back({v,w});
        gp[v].push_back({u,w});
    }
    for(int i = 1; i <= n; i++){
        dist[i] = INT_MAX;
    }

    dijkstra(1);

    for(int i = 1;i <= n;i++){
        cout<<"Node "<<i<<" : "<<dist[i]<<endl;
    }
  return 0;
}