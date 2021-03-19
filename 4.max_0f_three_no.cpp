#include<iostream>
using namespace std;
 
int main(){
   int a,b,c;
   cin>>a>>b>>c;
   if(a>b){
       if(a>c)
       cout<<"Greatest Number is:"<<a;
       else
        cout<<"Greatest Number is:"<<c;
   }
   else if(b>a){
       if(b>c)
        cout<<"Greatest Number is:"<<b;
       else
        cout<<"Greatest Number is:"<<c;
   }
   return 0;
}