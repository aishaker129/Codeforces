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
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];

        sort(a,a+n);

        int cnt=1,len=1;
        for(int i=0; i<n-1; i++){
            if(a[i+1]-a[i]<=k) len++;
            else{
                len = 1;
            }
            cnt = max(cnt,len);
        }

        cout<<n-cnt<<endl;
    }

    return 0;
}