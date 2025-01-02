#include<bits/stdc++.h>
using namespace std;

int main(){
 int a,b,c;
 cin>>a>>b>>c;
 int m,n,x,y,z;
 m =a+b*c;
 n =a*(b+c);
 x =a*b*c;
 y =(a+b)*c;
 z =a+b+c;

 cout<<max(max(max(max(m,n),x),y),z)<<endl;
 return 0;
}
