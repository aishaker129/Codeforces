/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 10/02/2024 
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
        int w,h,n;
        cin>>w>>h>>n;

        int sum = 1;

        if(w%2==0 && h%2==0){
            while(w%2==0 && w>1){
                sum *=2;
                w=w/2; 
            }
            while(h%2==0 && h>1){
                sum *=2;
                h=h/2;
            }
        }
        else if(w%2==0 && h%2!=0){
            while(w%2==0 && w>1){
                sum *=2;
                w=w/2; 
            }
        }
        else if(w%2!=0 && h%2==0){
            while(h%2==0 && h>1){
                sum *=2;
                h=h/2;
            }
        }
        else{
            sum = 1;
        }
        

        if(sum>=n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}