#include<iostream>
using namespace std;

int fact(int val){
    int f=1;
    for(int i=1;i<=val;i++){
        f=f*i;
    }
    return f;
}

int main(){
    int n,r;
    cin>>n>>r;
    cout<<fact(n)/(fact(r)*fact(n-r))<<endl;
    return 0;
}