#include<bits/stdc++.h>
using namespace std;
#define pi pair<int,int>
int n ,m;
const int N = 1005;
bool vis[N][N];
int dis[N][N];
vector<pi>path ={{-1,0},{1,0},{0,-1},{0,1}};
bool valid(int cI,int cJ){
    if(cI>=0 && cI<n &&  cJ>=0 && cJ<m) return true;
    else return false;
}
void bfs(int si,int sj){
    queue<pair<int,int>>q;
    q.push({si,sj});
    dis[si][sj] = 0;
    vis[si][sj] = true;

    while(!q.empty()){ 
        pi parent = q.front();
        q.pop();
        int pI = parent.first;
        int pj = parent.second;
        for(int i=0;i < 4; i++){
            pi p = path[i];
            int cI = pI+p.first;
            int cJ = pj+p.second;
            if(valid(cI,cJ) && !vis[cI][cJ]){
                vis[cI][cJ] = true;
                q.push({cI,cJ});
                dis[cI][cJ] = dis[pI][pj]+1;
            }
        }
    }
}
int main(){

    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int si,sj;
    cin>>si>>sj;
    bfs(si,sj);
    for(int i = 0;i <n;i++){
        for(int j = 0;j <m;j++){
            cout<<dis[i][j]<<" ";
        }
        cout<<endl;
    }
 
  return 0;
}