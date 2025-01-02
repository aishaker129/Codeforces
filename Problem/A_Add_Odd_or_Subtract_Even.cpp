/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 11/02/2024 
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
        if(a==b){
            cout<<0<<endl;
        }
        else if(a>b){
            int ans = a-b;

            if(ans%2==0){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }else{
            int ans = b-a;
            if(ans%2==1){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
    }

    return 0;
}