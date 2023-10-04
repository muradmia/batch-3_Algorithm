#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int l,int mid,int r){
    int left = mid-l+1;
    int right = r-mid;

    int L[left],R[right];
    int k = 0;
    for(int i = l;i <= mid;i++){
        L[k] = arr[i];
        k++;
    }
    k = 0;
    for(int i = mid+1;i <= r;i++){
        R[k] = arr[i];
        k++;
    }

    int i = 0,j = 0;
    int cur = l;
    while(i < left && j < right){
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
        i++;
        cur++;
    }

    while(j < right){
        arr[cur] = R[j];
        j++;
        cur++;
    }
}
void divide(int arr[],int l,int r){
    if(l < r){
        int mid = (l+r)/2;
        divide(arr,l,mid);
        divide(arr,mid+1,r);
       merge(arr,l,mid,r);
    }
}
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    divide(arr,0,n-1);
    //merge(arr,0,3,n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

 
  return 0;
}