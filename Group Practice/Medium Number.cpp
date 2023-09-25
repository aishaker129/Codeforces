#include<bits/stdc++.h>
using namespace std;

int main(){
 int t; cin>>t;
 int a,b,c;
 while(t--){
    cin>>a>>b>>c;
    int x=max(max(a,b),c);
    int y=min(min(a,b),c);
    if((x==a && y==b)||(x==b && y==a)){
        cout<<c<<endl;
    }
    else if((x==a && y==c)||(x==c && y==a)){
        cout<<b<<endl;
    }
    else{
        cout<<a<<endl;
    }
 }
 return 0;
}
