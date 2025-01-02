#include<iostream>
using namespace std;

int main(){
  int t; cin>>t;
  for(int j=0;j<t; j++){
    string s; cin>>s;

  int n=s.length();
  int f=0,l=0;
  for(int i=0; i<n/2; i++){
    f=f+s[i];
  }
  for(int i=n/2; i<n; i++){
    l=l+s[i];
  }
  if(f==l) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  }
  return 0;
}
