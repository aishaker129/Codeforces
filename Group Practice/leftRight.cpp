#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;
#define MOD 1000000007


int main(){
    optimize();
    ll l,r;
    cin>>l>>r;
    ll t = (((l-1)*(l))/2)%MOD;
    ll t1 = (((r)*(r+1))/2)%MOD;

    cout<<t1-t<<endl;

    return 0;
}