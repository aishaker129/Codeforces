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
        int n; cin>>n;
        int cnt = 0;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];

        for(int i=0; i<n-1; i++){
            if((a[i]%2 && a[i+1]%2) || (a[i]%2==0 && a[i+1]%2==0)) cnt++;
        }

        cout<<cnt<<endl;
    }

    return 0;
}