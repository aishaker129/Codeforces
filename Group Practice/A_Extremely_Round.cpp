/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 08/03/2024 
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
        string s;
        cin>>s;
        int n = s.size();
        int ans = 0;
        ans+=(n-1)*9;
        ans +=s[0]-'0';
        cout<<ans<<endl;
    }

    return 0;
}