/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 06/02/2024 
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
        bool f = true;
        for(int i=0; i<n; i+=2){
            for(int j=1; j<n; j+=2){
                if(s[i]==s[j]){
                    f = false;
                }
            }
        }

        
        
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}