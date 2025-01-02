/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 08/02/2024 
*/ 
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main(){
    optimize();
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    int mn = INT_MIN;
    bool f = false;
    for(int i=0; i<n; i++){
        if(a[i]%2==1){
            mn = max(i,mn);
            f = true;
        }
    }

    if(f) cout<<mn<<endl;
    else cout<<-1<<endl;
    return 0;
}