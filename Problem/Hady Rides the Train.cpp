#include<bits/stdc++.h>
using namespace std;

int main(){
 long long id; cin>>id;
 long long r,c,a;
 r=id/4;
 c = id%4;
 if(r%2!=0){
    a=3-c;
 }
 else{
    a=c;
 }
 cout<<r<<" "<<a;

 return 0;
}
