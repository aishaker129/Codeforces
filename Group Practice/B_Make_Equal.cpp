/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 14/02/2024 
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
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        int sum  =0;

        for(int i=0; i<n; i++){
            sum +=a[i];
        }

        int num = sum/n;
        bool f = 1;
        ll r = 0;
        for(int i=0; i<n; i++){
            if(a[i]>=num){
                r +=(a[i]-num);
            }
            else{
                int d = num - a[i];
                if(d<=r){
                    r -=d;
                }else{
                    f = 0;
                    break;
                }
                
            }
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }

    return 0;
}