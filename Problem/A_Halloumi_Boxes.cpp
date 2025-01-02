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

bool solve(int a[],int n){
    int nm = 0;
    bool cnt = true;
    for(int i=0; i<n; i++){
        nm = i;
        for(int j=i+1; j<n; j++){
            if(a[j]<a[nm]){
                nm = j; 
            }
        }

        if(nm !=i){
            cnt=false;
            break;
        }
    }
    return cnt;
}
int main(){
    optimize();

    int t; cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        int a[n];
        for(int i=0; i<n; i++)cin>>a[i];
        if(solve(a,n) || m>1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}