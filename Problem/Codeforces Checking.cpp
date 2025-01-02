#include<bits/stdc++.h>
using namespace std;

int main(){
 string s="codeforces";
 int t;
 cin>>t;
 while(t--){
    int n = s.size();
 char ch; cin>>ch;
 bool found = false;
 for(int i=0; i<n; i++){
    if(s[i]==ch){
        found = true;
        break;
    }
 }
 if(found){
    cout<<"YES"<<endl;
 }
 else{
    cout<<"NO"<<endl;
 }
 }
 return 0;
}
