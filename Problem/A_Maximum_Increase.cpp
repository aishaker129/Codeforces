/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 11/02/2024 
*/ 
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main(){
    optimize();

    int n; cin>>n;
    int a[n];

    for(int i=0; i<n; i++) cin>>a[i];

    int cnt = 1,ans = 1;

    for(int i=1; i<n; i++){
        if(a[i]>a[i-1]) cnt++;
        else cnt = 1;

        ans = max(cnt,ans);
    }

    cout<<ans<<endl;

    return 0;
}