#include<iostream>
using namespace std;

bool armstrongno(int n){
    int sum=0;
    int c=n;
    while(n>0){
        int l=n%10;
        sum+=l*l*l;
        n/=10;
    }
    if(sum==c){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    if(armstrongno(n)){
        cout<<"Armstrong Number"<<endl;
    }
    else{
        cout<<"Not a Armstrong Number"<<endl;
    }
    return 0;
}