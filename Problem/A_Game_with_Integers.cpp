/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 01/03/2024 
*/ 
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main(){
    optimize();

    int t; cin>>t;
    while (t--){
        int n; cin>>n;
        if((n+1)%3==0 || (n-1)%3==0) cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
    {
        /* code */
    }
    

    return 0;
}