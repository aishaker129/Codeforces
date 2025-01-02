/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 24/02/2024 
*/ 
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main(){
    optimize();

    int t; cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n==1){
            cout<<0<<endl;
        }
        else{
            ll ans = min(2,(n-1))*m;
            cout<<ans<<endl;
        }
    }

    return 0;
}