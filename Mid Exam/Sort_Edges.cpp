#include<bits/stdc++.h>
using namespace std;
#define pi pair<int,int>
int main(){

    int n;
    cin>>n;
    priority_queue<pi,vector<pi>,greater<pi>>pq;

    while(n--){
        int a,b;
        cin>>a>>b;
        pq.push({a,b});
    }

    while(!pq.empty()){
        auto result =pq.top();
        pq.pop();
        cout<<result.first<<" "<<result.second<<endl;
    }
  return 0;
}