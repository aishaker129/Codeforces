#include<bits/stdc++.h>
using namespace std;

int main(){
 int n; cin>>n;
vector<int>v(n);
 int maxx=0;
 for(int i=0;i<n; i++){
    cin>>v[i];
 }
 for(auto u:v){
    if(u>maxx){
        maxx=u;
    }
 }
 cout<<maxx<<endl;
 return 0;
}
