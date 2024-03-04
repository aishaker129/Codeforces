/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 05/03/2024 
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
        int n; cin>>n;
        int a[n];
        ll sum = 0;
        for(int i=0; i<n-1; i++){
            cin>>a[i];
            sum +=a[i];
        }

        ll ans = 0-sum;
        cout<<ans<<endl;
    }

    return 0;
}