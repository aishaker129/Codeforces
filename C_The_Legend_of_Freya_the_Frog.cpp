#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;


int main(){
    optimize();

    int t; cin>>t;
    while(t--){
        ll x,y,k;
        cin>>x>>y>>k;
        ll f =(x+(k-1))/k;
        ll l = (y+(k-1))/k;
        if(f>l){
            cout<<2*f-1<<endl;
        }
        else{
            cout<<2*l<<endl;
        }
    }
    return 0;
}