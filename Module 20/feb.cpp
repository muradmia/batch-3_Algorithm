#include<iostream>
using namespace std;
int arr[1000];
int feb(int s){
    
    if(s == 0 || s == 1){
        return 1; 
    }

    if(arr[s] != -1){
        return arr[s];
    }
    int f = feb(s-1);
    int l = feb(s-2);
    arr[s] =  f+l;
    return arr[s];
}
int main(){

    //cout<<"hello world";
    
    int n;
    cin>>n;
    for(int i = 0;i < n;i++){
        arr[i] = -1;
    }
    cout<<feb(n);


    return 0;
}