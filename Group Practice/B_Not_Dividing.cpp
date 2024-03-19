/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 19/03/2024 
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
        for(int i=0; i<n; i++){
            if(a[i]==1) a[i]++;
        }
        for(int i=1; i<n; i++){
            if(a[i]%a[i-1]==0){
                a[i]++;
            }
        }

        for(auto u:a) cout<<u<<" ";
        cout<<endl;
    }

    return 0;
}