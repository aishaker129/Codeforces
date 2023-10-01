#include<bits/stdc++.h>
using namespace std;

void revers(string s){
 int n = s.length();
 for(int i=0; i<n/2; i++){
    swap(s[i],s[n-i-1]);
 }
 for(int i=0; i<n; i++){
    cout<<s[i]<<" ";
 }
 cout<<endl;
}
int main(){
 int t; cin>>t;
 while(t--){
    string s;
    cin>>s;
    revers(s);
 }
 return 0;
}
