#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
 string s,a,d,b;
 getline(cin,s);
 getline(cin,a);
 getline(cin,d);
 b = s+a;
 sort(b.begin(),b.end());
 sort(d.begin(),d.end());
 if(b==d){
    cout<<"YES"<<endl;
 }
 else{
    cout<<"NO"<<endl;
 }

  return 0;
}
