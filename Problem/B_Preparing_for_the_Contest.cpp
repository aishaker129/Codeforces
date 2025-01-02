/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 09/02/2024 
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
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            a[i] = n-i;
        }

        reverse(a.end()-k-1,a.end());

        for(int i=0; i<n; i++){
            cout<<a[i]<<" ";
        }
    }

    return 0;
}