#include<bits/stdc++.h>
using namespace std;

 int main(){
   int n; cin>>n;
   for(int i=0; i<n; i++){
    string s;
   cin>>s;
   if((s[0]=='a' && s[1]=='b' && s[2]=='c') || (s[0]=='b' && s[1]=='a' && s[2]=='c') || (s[0]=='c' && s[1]=='b' && s[2]=='a') || (s[0]=='a' && s[1]=='c' && s[2]=='b')){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
   }
  return 0;
 }

