/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 13/03/2024 
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
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];

        int x = 0;
        for(int i=0; i<n; i++){
            x ^=a[i];
        }
        for(int i=0; i<n; i++){
            a[i]^=x;
        }
        int y=0; 
        for(int i=0; i<n; i++){
            y ^=a[i];
        }

        if(y==0) cout<<x<<endl;
        else cout<<-1<<endl;
    }

    return 0;
}