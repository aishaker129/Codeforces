/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 23/02/2024 
*/ 
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main(){
    optimize();

    ll n; cin>>n;
    if(n==0){
        cout<<0<<endl;
    }
    else if((n+1)%2==0){
       // int ans = (n+1)/2;
        cout<<(n+1)/2<<endl;
    }
    else{
        cout<<n+1<<endl;
    }

    return 0;
}