#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int l,int m,int r){
    int left = m-l+1;
    int right = r-m;

    int R[right],L[left];
    int k = 0;
    for(int i = l;i <= m;i++){
        L[k] = arr[i];
        k++;
    }
    k = 0;

    for(int i = m+1;i <= r;i++){
        R[k] = arr[i];
        k++;
    }

    int i = 0,j = 0;
    int cur = l;

    while(i<left && j < right){
        if(L[i] <= R[j]){
            arr[cur] = L[i];
            i++;
        }else{
            arr[cur] = R[j];
            j++;
        }
        cur++;
    }

    while(i < left){
        arr[cur] = L[i];
        cur++;
        i++;
    }

    while(j < right){
        arr[cur] = R[j];
        cur++;
        j++;
    }

}
int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i < n;i++){
        cin>>a[i];
    }

    merge(a,0,3,n-1);

    for(int i = 0;i < n;i++){
        cout<<a[i]<<" ";
    }

  return 0;
}