/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 21/02/2024 
*/ 
 
#include<bits/stdc++.h>
using namespace std;
#define mod 100000007
 
typedef long long  ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main(){
    optimize();

    int t; cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        string s;
        cin>>s;

        int l=0, r = n-1;
        int sum = 1;

        for(int i=0; i<n; i++){
            if(s[i]=='L') l++;
            else r--;
        }

        vector<int> v;
        ll c = 1;

        for(int i=n-1; i>=0; i--){
            if(s[i]=='R'){
                r++;
                c *=a[r];
            }
            else{
                l--;
                c *=a[l];
            }
            
            c %=m;
            v.push_back(c);
        }

        for(int i=n-1; i>=0; i--){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

    
    return 0;
}