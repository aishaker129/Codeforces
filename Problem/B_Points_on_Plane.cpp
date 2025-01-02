#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;

void solve(){
    ll n;
    cin >> n;
    ll r = sqrt(n);
    if(r*r==n)
        r -= 1;
    cout << r << endl;
}

int main(){
    optimize();

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}