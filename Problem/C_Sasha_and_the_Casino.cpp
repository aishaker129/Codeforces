/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 15/02/2024 
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
        int k,x,a;
        cin>>k>>x>>a;
        __int128_t y=1;
        while(x--){
            y +=y/(k-1)+1;
        }
        if(y<=a) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}