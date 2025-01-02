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
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(a>b){
            swap(a,b);
        }
        if((a%2==1 && b%2==1) || (a%2==1)&& (b==2*a)){
            cout<<"No"<<endl;
        }
        else cout<<"Yes"<<endl;
    }

    return 0;
}