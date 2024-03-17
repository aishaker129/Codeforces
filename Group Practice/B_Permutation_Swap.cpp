/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 18/03/2024 
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
        int a[n+1];
        for(int i=1; i<=n; i++) cin>>a[i];
        int cnt = 0;
        for(int i=1; i<=n; i++){
            cnt = __gcd(cnt,abs(a[i]-i));
        }
        cout<<cnt<<endl;
    }

    return 0;
}