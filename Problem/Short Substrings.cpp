#include<bits/stdc++.h>
using namespace std;

int main(){
 int t; cin>>t;
 string s;

 while(t--){
    cin>>s;
    int n = s.size();
    cout<<s[0];
    for(int i=1; i<n; i+=2){
        cout<<s[i];
    }
   cout<<endl;
 }
return 0;
}
