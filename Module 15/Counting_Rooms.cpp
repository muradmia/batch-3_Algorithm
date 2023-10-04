#include<bits/stdc++.h>
using namespace std;
#define pi pair<int,int>
const int N =10005;
int n,m;
char a[N][N];
bool vis[N][N];
int cel = 0;
vector<pi>path ={{-1,0},{1,0},{0,-1},{0,1}};
bool valid(int cI,int cJ){
    if(cI>=0 && cI<n &&  cJ>=0 && cJ<m && a[cI][cJ] =='.') return true;
    else return false;
}
void dfs(int si,int sj){
    vis[si][sj] = true;
    cel++;
    for(auto v : path){
        auto  parent = v;
        int ci = si+v.first;
        int cj = sj+v.second;

        if(!vis[ci][cj] && valid(ci,cj)){
            dfs(ci,cj);
        }
    }
}
int main(){

    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int cnt = 0;
    int mn = INT_MAX;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            if(!vis[i][j] && a[i][j] =='.'){
                cnt++;
                dfs(i,j);
                mn = min(mn,cnt);
            }
        }
    }

    cout<<cnt<<endl;
    //cout<<cel;


 
  return 0;
}