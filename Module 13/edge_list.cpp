#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,e;
    cin>>n>>e;
    vector<pair<int,int>>vec;
    while(e--){
        int u,v;
        cin>>u>>v;
        vec.push_back({u,v});
    }

    for(int i=0;i<=vec.size()-1;i++){
        cout<<vec[i].first<<" "<<vec[i].second<<" "<<endl;
    }
 
  return 0;
}