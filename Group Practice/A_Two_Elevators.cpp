/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 29/02/2024 
*/ 
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main(){
    optimize();

    int t; cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int d = a-1,d1 = abs(b-c)+(c-1);
        int ans = 0;
        if(d<=d1){
            ans +=1;
        }
        if(d>=d1){
            ans +=2;
        }

        cout<<ans<<endl;
    }

    return 0;
}