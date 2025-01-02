/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 06/03/2024 
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

        bool f = true;

        for(int i=1; i<n; i++){
            if(a[i]<a[i-1]){
                f = false;
                cout<<0<<endl;
                break;
            }
        }
        if(f){
            int m = INT_MAX;
            for(int i=1; i<n; i++){
                if(a[i]-a[i-1]<m){
                    m = a[i]-a[i-1];
                }
            }

            cout<<(m/2)+1<<endl;
        }
    }

    return 0;
}