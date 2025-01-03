#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;

void solve(){
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    map<int, int> m;
    for(auto u:v)
        m[u]++;

    int idx = 0, nu = 0;
    for(auto u:m){
        if(u.second==1)
            idx++;
        else
            nu++;
    }

    int ans = ceil((double)idx/2) * 2 + nu;
    cout << ans << endl;
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