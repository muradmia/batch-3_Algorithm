#include<bits/stdc++.h>
using namespace std;
const int N  = 1e3+5;
vector<pair<long long int,long long int>>gp[N];
int dist[N];
bool visited[N];
void dijkstra(int s){
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
    pq.push({0,s});
    dist[s] = 0;
    while(!pq.empty()){
        auto parent = pq.top();
        pq.pop();
        long longint parentnode = parent.second;
        int parentcost = parent.first;
        if(visited[parentnode])continue;
        visited[parentnode] = true;
        for(auto v: gp[parentnode]){
            long long int childnode = v.first;
            long long int childcost = v.second;
            if(parentcost+childcost < dist[childnode]){
                dist[childnode] = parentcost+childcost;
                pq.push({dist[childnode],childnode});
            }
        }
    }
}
int main(){
    int n,e;
    cin>>n>>e;
    while(e--){
        long long int u,v,w;
        cin>>u>>v>>w;
        gp[u].push_back({v,w});
        gp[v].push_back({u,w});
    }
    for(int i = 1;i <= n;i++){
        dist[i] = INT_MAX;
    }
    int s;
    cin>>s;
    dijkstra(1);
    int test;
    cin>>test;
    while(test--){
        long long int a,b;
        cin>>a>>b;
        if(dist[a] <= b){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }

  return 0;
}