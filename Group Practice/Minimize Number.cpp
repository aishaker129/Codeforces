#include<bits/stdc++.h>
using namespace std;

int main(){
 int n; cin>>n;
 int a[n];
 for(int i=0; i<n; i++){
    cin>>a[i];
 }
 int ans=0;
 while(true){
    int c=0;
 for(int i=0; i<n; i++){
    if(a[i]%2==0){
        c++;
    }
    a[i] /=2;
 }
 if(c==n){
    ans++;
 }
 else{
    break;
 }
 }
 cout<<ans<<endl;
 return 0;
}
