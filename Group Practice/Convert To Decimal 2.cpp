#include<bits/stdc++.h>
using namespace std;

int main(){
 int t; cin>>t;
 int n;
 while(t--){
    cin>>n;
    int c=0;
    while(n>0){
        if(n%2==1){
            c++;
        }
        n /=2;
    }
    int dec=0;
    for(int i=0; i<c; i++){
        dec =dec*2+1;
    }
    cout<<dec<<endl;
 }
 return 0;
}
