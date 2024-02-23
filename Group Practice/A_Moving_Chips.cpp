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

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];

        int l=0,r=0;

        for(int i=0; i<n; i++){
            if(a[i]==1){
                l = i;
                break;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(a[i]==1) {
                r = i;
                break;
            }
        }

        int cnt = 0;
        for(int i=l; i<=r; i++){
            if(a[i]==0) cnt++;
        }
        cout<<cnt<<endl;
    }

    return 0;
}