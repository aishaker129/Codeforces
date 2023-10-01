#include<bits/stdc++.h>
using namespace std;

int main(){
int t; cin>>t;
int n;
while(t--){
    cin>>n;
    int a,b;
   if(n%3==0){
    a=n/3;
    b=(n-a)/2;
    cout<<a<<" "<<b<<endl;
   }

   else if(n%3==1){
    a = n/3+1;
    b=(n-a)/2;
    cout<<a<<" "<<b<<endl;
   }
   else{
    a =(n-2)/3;
    b = (n-a)/2;
    cout<<a<<" "<<b<<endl;
   }
}
 return 0;
}
