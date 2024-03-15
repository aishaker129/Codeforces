/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 16/03/2024 
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
        int a,b,n;
        cin>>a>>b>>n;
        ll time = b;
        for(int i=0; i<n; i++){
            int x; cin>>x;
            time += min(a-1,x);
        }

        cout<<time<<endl;
    }

    return 0;
}