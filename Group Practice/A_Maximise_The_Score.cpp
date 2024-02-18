/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 17/02/2024 
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
    int a = 2*n;
    vector<int> v(a);

    for(int i=0; i<a; i++) cin>>v[i];
    sort(v.begin(),v.end());
    ll ans = 0;
    for(int i=1; i<a; i+=2){
        ans +=min(v[i],v[i-1]);
    }

    cout<<ans<<endl;


   }
    return 0;
}