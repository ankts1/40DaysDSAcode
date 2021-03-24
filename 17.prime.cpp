#include<iostream>
#include<cmath>
using namespace std;

bool isprime(int n){
    if(n==1){
        return 0;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
          return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    if(isprime(n))
    cout<<"Prime No"<<endl;
    else
    cout<<"Not a Prime No"<<endl;
    return 0;
}