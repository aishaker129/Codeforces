/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 25/02/2024 
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
        for(int i=0; i<n; i++) cin>>a[i];
        map<int,int> m;
        for(auto u:a){
            m[u]++;
        }

        int ans =0;
        bool f = false;
        for(auto u:m){
            if(u.second>=3){
                ans = u.first;
                f = true;
                break;
            }
        }

        if(f) cout<<ans<<endl;
        else cout<<-1<<endl;
    }

    return 0;
}