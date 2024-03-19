/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 20/03/2024 
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
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int ans = a[n-1] - a[0];
    for(int i = 1; i<n-1; i++)ans = max(ans, a[n-1] - a[i]);
    for(int i = 1; i<n; i++)ans = max(ans, a[i-1] - a[i]);
    for(int i = 1; i<n; i++)ans = max(ans, a[i] - a[0]);
    cout << ans <<endl;;
    }

    return 0;
}