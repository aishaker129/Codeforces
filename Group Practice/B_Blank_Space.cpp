/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 14/03/2024 
*/ 
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define T  int t; cin>>t; while(t--)
int main(){
    optimize();
    T{
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        int mx=0,cnt=0;
        for(int i=0; i<n; i++){
            if(a[i]==0) mx++;
            else{
                cnt = max(cnt,mx);
                mx = 0;
            }
        }

        cout<<max(cnt,mx)<<endl;
    }

    return 0;
}