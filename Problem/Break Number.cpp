#include<bits/stdc++.h>
using namespace std;

int main(){
 long long t; cin>>t;
 long long n[t],a[t];
 for(int i=0; i<t; i++){
    cin>>n[i];
 }

 for(int i=0; i<t; i++){
        int c=0;
  while(n[i]>0){
    if(n[i]%2!=0){
        c=0+c;
        break;
    }
    else{
        n[i]=n[i]/2;
        c++;
    }
  }
  a[i]=c;
 }
 int maxx=0;
 for(int i=0; i<t; i++){
    if(a[i]>maxx){
        maxx=a[i];
    }
    else maxx=maxx+0;
 }
 cout<<maxx<<endl;
}
