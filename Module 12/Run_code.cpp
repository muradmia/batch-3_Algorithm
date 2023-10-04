#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int l,int m,int r){
    int left = m-(l+1);
    int right = r-m;
    int left_arr[left],right_arr[right];
    int k = 0;

    for(int i = l;i <= m;i++){
        left_arr[k] = a[i];
        k++;
    }
    k = 0;
    for(int i = m+1;i <= r;i++){
        right_arr[k] = a[i];
        k++;
    }

    for(int i = 0;i <= m;i++){
        cout<<right_arr[i]<<" ";
    }
    

}
int main(){
   // cout<<"Hello I am Murad Mia";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    merge(arr,0,4,n-1);
 
  return 0;
}