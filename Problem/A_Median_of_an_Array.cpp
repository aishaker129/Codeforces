/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 22/03/2024 
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
        int n; cin >> n;
        vector<int> a(n+1);
        for(int i = 1; i <= n; i++) cin >> a[i];
        sort(a.begin(),a.end());
        int cnt = 0;
        int m = (n+1)/2;
        for(int i=m; i<=n; i++){
            if(a[i] == a[m]) cnt++;
            else break;
        }

        cout<<cnt<<endl;
    }

    return 0;
}