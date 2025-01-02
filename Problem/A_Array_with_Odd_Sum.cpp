/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 17/02/2024 
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
        int n; cin>>n;
        int sum = 0;
        bool e = false, o = false;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            sum +=a;
            if(a%2==0) e=true;
            else o = true;
        }

        if(sum%2!=0 || (e&&o)){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }

    return 0;
}