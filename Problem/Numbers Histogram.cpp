#include<bits/stdc++.h>
using namespace std;


int solve(int num,char ch){
 for(int i=0; i<num; i++){
    cout<<ch;
 }
 cout<<endl;
}
int main(){
 char ch; cin>>ch;
 int n; cin>>n;
 int a[n];
 for(int i=0; i<n; i++){
    cin>>a[i];
 }
 for(int i=0; i<n; i++){
    solve(a[i],ch);
 }
 return 0;
}
