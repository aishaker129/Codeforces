/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 09/03/2024 
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
        int n,a,b;
        cin>>n>>a>>b;
        if(a==b && b==n) cout<<"Yes"<<endl;
        else if((a+b+2)<=n) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}