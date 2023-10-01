#include<bits/stdc++.h>
using namespace std;

int main(){
 int t; cin>>t;
 while(t--){
    int h,m;
 cin>>h>>m;
 int sum = h*60+m;
 int ans = 24*60 - sum;
 cout<<ans<<endl;
 }
return 0;
}
