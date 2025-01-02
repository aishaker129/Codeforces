/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 09/02/2024 
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
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        ll res = 1;

        for(ll i=0; i<n; i++){
            res =res*a[i];
        }

        if(2023%res==0){
            cout<<"YES"<<endl;
            ll ans = 2023/res;
            while(k--){
                for(int i=ans; i>0; i--){
                    if(ans%i==0 && 2023%i==0){
                        ans = ans/i;
                        cout<<i<<" ";
                        break;
                    }
                    
                }
                
            }
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}