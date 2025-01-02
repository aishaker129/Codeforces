#include<bits/stdc++.h>
using namespace std;

int main(){
 long long n,m,k;
 cin>>n>>m>>k;
 long long a = min(min(n,m),k);
 long long b = 0;
 if(a==n){
    cout<<n<<endl;
 }
 else if(a==m){
    n = n-m;
    k = k- m;
    if(n>k){
        if(n/2 <= k){
            cout<<m+(n/2)<<endl;
        }
        else if(n/2>k){
            cout<<m+k<<endl;
        }
        else{
            n = n-k;
            cout<<m+(n/2)<<endl;
        }
    }
    else{
        cout<<m+(n/2)<<endl;
    }
 }
 else{
    cout<<k<<endl;
 }
 return 0;
}
