#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;

void solve(){
    int x, y, k;
    cin >> x >> y >> k;
    if(x>y){
        swap(x, y);
    }
    cout << 0 << ' ' << x << ' ' << x << ' ' << 0 << endl;
    cout << 0 << ' ' << 0 << ' ' << x << ' ' << x << endl;
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