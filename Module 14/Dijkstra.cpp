#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<pair<int,int>> adj[N];
int dis[N];
void dijkstra(int i){
    queue<int>q;
    q.push(i);
    dis[i] = 0;
    while(!q.empty()){
        int parent = q.front();
        q.pop();
        for(auto v : adj[parent]){
            int child = v.first;
            int cost = v.second;
            if()
            if(dis[parent]+cost < dis[child]){
                dis[child] = dis[parent]+cost;
                q.push(child);
            }
        }
    }
}
int main(){

    int n,e;
    cin >> n >> e;
    while(e--){
        int u,v,w;
        cin>>u >> v >>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    for(int i = 1;i <= n;i++){
        dis[i] = INT_MAX;
    }
    int n;
    cin>>n;
    dijkstra(1);
    int test;
    cin>>test;
    while(test--){
        int a,b;
        cin>>a>>b;
        if(dist[a] <= b){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }
  return 0;
}