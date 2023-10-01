#include<bits/stdc++.h>
using namespace std;

int main(){
 int t; cin>>t;
 while(t--){
    int a[4];
 for(int i=0; i<4; i++){
    cin>>a[i];
 }
 int maxx = max(max(max(a[0],a[1]),a[2]),a[3]);
 int n=0;
 for(int i=0; i<4; i++){
    if(a[i]>n && a[i]<maxx){
        n = a[i];
    }
 }
 int sum = maxx + n;
 int f1 = max(a[0],a[1]);
 int f2 = max(a[2],a[3]);
 if((f1+f2)>=sum){
    cout<<"YES"<<endl;
 }
 else{
    cout<<"NO"<<endl;
 }
 }
}
