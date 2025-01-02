#include<bits/stdc++.h>
using namespace std;

int main(){
 int t; cin>>t;
 int a,b;
 while(t--){
    cin>>a>>b;
    int l=max(a,b);
    int m=min(a,b);
    if(l>=2*m){
        cout<<l*l<<endl;
    }
    else{
        cout<<2*m*2*m<<endl;
    }
 }
 return 0;
}
