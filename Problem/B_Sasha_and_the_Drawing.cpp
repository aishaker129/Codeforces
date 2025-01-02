/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 16/02/2024 
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
        int a,b;
        cin>>a>>b;
        int c = (b-1)/2+1;
        if(b==(4*a)-2){
            c++;
        }
        cout<<c<<endl;
    }

    return 0;
}