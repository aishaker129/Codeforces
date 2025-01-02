/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 26/02/2024 
*/ 
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main(){
    optimize();
    int n,k;
    cin>>n>>k;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int cnt = 0;
    

    for(int i=0; i<n; i++){
        if(a[i]<=k) cnt++;
        else break;
    }

    if(cnt<n){
        for(int i=n-1; i>=0; i--){
            if(a[i]<=k) cnt++;
            else break;
        }
    }

    cout<<cnt<<endl;
    return 0;
}