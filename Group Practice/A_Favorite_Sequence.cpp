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
        int n; cin>>n;
        int a[n];
        vector<int> v;
        for(int i=0; i<n; i++) cin>>a[i];
        
        for(int i=0,j=n-1; i<=j; ++i,--j){
            if(i!=j) cout<<a[i]<<" "<<a[j]<<" ";
            else cout<<a[i];
        }
        cout<<endl;
    }

    return 0;
}