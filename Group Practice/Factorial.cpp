#include<bits/stdc++.h>
using namespace std;

int main(){

int t; cin>>t;
int a;
for(int i=0; i<t; i++){
    cin>>a;
   long long  fact = 1;
   for(int i=1; i<=a; i++){
    fact *=i;
   }
   cout<<fact<<endl;
}
return 0;
}
