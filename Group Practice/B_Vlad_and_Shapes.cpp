/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 19/02/2024 
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
        string a[n];
        bool f = false;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int cnt1[n];
        for(int i=0; i<n; i++){
            int cnt = 0;
            for(int j=0; j<n; j++){
                if(a[i][j]=='1') cnt++;
            }

            cnt1[i] = cnt;
        }
        int maxx = 0, minn = 1000;
        for(int i=0; i<n; i++){
            if(cnt1[i]>0){
                maxx = max(maxx,cnt1[i]);
                minn = min(minn,cnt1[i]);
            }
        }
       // cout<<maxx<<" "<<minn<<endl;
        if(maxx==minn) cout<<"SQUARE"<<endl;
        else cout<<"TRIANGLE"<<endl;
    }

    return 0;
}