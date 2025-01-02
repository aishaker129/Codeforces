#include<bits/stdc++.h>
using namespace std;

int main(){
 int t; cin>>t;
 int n,b;
 while(t--){
    cin>>n>>b;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    bool found = false;
    for(int i=0; i<n; i++){
        if(a[i]==b){
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

 }
 return 0;
}
