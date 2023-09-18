#include<bits/stdc++.h>
using namespace std;

int main(){
 string s;
 cin>>s;
 bool found =  false;
 for(int u=0; u<s.size(); u++){
    if(s[u]=='H' || s[u]=='Q' ||s[u]=='9'){
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
 return 0;
}
