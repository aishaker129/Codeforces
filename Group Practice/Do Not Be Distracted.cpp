#include<bits/stdc++.h>
using namespace std;

int main(){
 int t; cin>>t;

 int n;
 while(t--){
    cin>>n;
    char a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int c=0,d;
    for(int i=0; i<n; i++){
        if(a[i]==a[i+1]){
            continue;
        }
        else{
            for(int j=i+1; j<n; j++){
                if(a[i]==a[j]){
                    c++;
                    break;
                }
            }
        }
    }
    if(c==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
 }
 return 0;
}
