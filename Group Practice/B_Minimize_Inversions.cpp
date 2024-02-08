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
        int n; cin>>n;
        pair<int,int> p[n];

        for(int i=0; i<n; i++){
            cin>>p[i].first;
        }
        for(int i=0; i<n; i++){
            cin>>p[i].second;
        }

        sort(p,p+n);

        for(int i=0; i<n; i++){
            cout<<p[i].first<<" ";
        }
        cout<<endl;
        for(int i=0; i<n; i++){
            cout<<p[i].second<<" ";
        }
        cout<<endl;
    }

    return 0;
}