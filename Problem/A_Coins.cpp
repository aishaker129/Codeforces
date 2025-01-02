/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 13/03/2024 
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
        ll n,k;
        cin>>n>>k;
        bool f=false;
        for(int x=0; x<2; x++){
            if((n-(x*k)>=0) && (n-(x*k))%2==0){
                f = true;
                break;
            }
            
        }

        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }

    return 0;
}