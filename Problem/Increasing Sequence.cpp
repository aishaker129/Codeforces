#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    int n;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int b=1;
        for(int i=0; i<n; i++){
            if(a[i]==b){
                b = a[i]+1;
            }
            if(i==n-1) break;
            b++;
        }
        cout<<b<<endl;
    }
 return 0;
}
