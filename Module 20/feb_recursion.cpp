#include<iostream>
using namespace std;
int feb(int s){
    
    if(s == 0 || s == 1){
        return 1; 
    }

    int f = feb(s-1);
    int l = feb(s-2);
    return f+l;
}
int main(){

    //cout<<"hello world";
    int n;
    cin>>n;
    cout<<feb(n);


    return 0;
}