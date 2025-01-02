/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 20/02/2024 
*/ 
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

const int mx = 2e5+1;
int a[mx];


int main(){
    optimize();

    for(int i=1; i<mx; i++){
        ll sum = 0;
        int b = i;
        while(b){
            sum += b%10;
            b = b/10;
        }
        a[i] = a[i-1]+sum;
         
    }
    int t; cin>>t;
    while(t--){
        int n; cin>>n;

        cout<<a[n]<<endl;
    }
    
    return 0;
}