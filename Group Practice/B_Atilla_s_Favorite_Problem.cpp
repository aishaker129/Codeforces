/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 12/02/2024 
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
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        char l = s[n-1];
        int ans = l-'a';
        cout<<ans+1<<endl;
    }

    return 0;
}