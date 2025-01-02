/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 01/03/2024 
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
        int n,m;
        cin>>n>>m;

        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        int res = a[0]-0;
        
        for(int i=0; i<n; i++){
            int ans=0;
            if(i==n-1){
                ans = 2*(m-a[i]);
            }
            else{
                ans = a[i+1]-a[i];
            }

            res = max(res,ans);
        }

        cout<<res<<endl;
    }

    return 0;
}