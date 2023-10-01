#include<bits/stdc++.h>
using namespace std;

int main(){
 int n; cin>>n;

 for(int i=0; i<n;i++){
    for(int j=0; j<=n+i-1; j++){
        if(j<n-i-1){
            cout<<" ";
        }
        else{
            cout<<"*";
        }
    }
    cout<<endl;
 }
 for(int i=n; i>=1;i--){
    for(int j=1; j<=n+i-1; j++){
        if(j<n-i+1){
            cout<<" ";
        }
        else{
            cout<<"*";
        }
    }
    cout<<endl;
 }
}
