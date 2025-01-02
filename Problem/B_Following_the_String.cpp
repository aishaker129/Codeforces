/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 27/02/2024 
*/ 
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main(){
    optimize();
    int t; cin>>t;
    map<char,int> m;
    string s ="abcdefghijklmnopqrstuvwxyz";
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0; i<26; i++) m[s[i]] = 0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            for(auto u:m){
                if(u.second==a[i]){
                    cout<<u.first;
                    m[u.first]++;
                    break;
                }
            }
        }
        cout<<endl;
    }

    return 0;
}