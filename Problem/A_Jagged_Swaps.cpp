/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 02/03/2024 
*/ 
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    int t; cin>>t;
    int n;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        if(a[0]==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}