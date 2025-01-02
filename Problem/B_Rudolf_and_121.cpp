/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 12/03/2024 
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
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];

        bool f = true;

        for(int i=0; i<n-2; i++){
            if(a[i]==0) continue;
            else if(a[i]<0){
                f = false;
            }
            else{
                a[i+1] -=2*a[i];
                a[i+2] -=a[i];
            }
            
        }
        if(f && (a[n-1]==0 && a[n-2]==0)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}