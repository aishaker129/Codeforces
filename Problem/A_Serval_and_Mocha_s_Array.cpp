/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 19/03/2024 
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
        bool f = false;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(__gcd(a[i],a[j])<=2){
                    f = true;
                    break;
                }
            }
        }
        
        if(f) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

        
    return 0;
}