/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 05/03/2024 
*/ 
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main(){
    optimize();

    int n; cin>>n;
    
    int mn = INT_MAX;

    for(int i=0; i<n; i++){
        int a; cin>>a;
        mn = min(mn,abs(a));
    }

    cout<<mn<<endl;

    return 0;
}