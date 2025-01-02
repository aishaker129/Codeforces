#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> m;
    for(auto u:s){
        m[u]++;
    }
    int mx = 0;
    int mn = 0;
    for(auto u:m){
        mx = u.second;
        mn = u.second;
    }
    for (auto u : m)
    {
        mx = max(mx, u.second);
        mn = min(mn, u.second);
    }
    char chm, chl;
    bool f = false, t = false;
   if(mx==mn){
        for(auto u:m){
            chm = u.first;
            break;
        }
        for(auto u:m){
            chl = u.first;
        }
   }
   else{
        for (auto u : m)
        {
            if(mx==u.second){
                chm = u.first;
                f = true;
            }
            if (mn == u.second){
                chl = u.first;
                t = true;
            }
        if(f && t)
            break;
        }
   }

    for (int i = 0; i < n; i++){
        if(chl ==s[i]){
            s[i] = chm;
            break;
        }
    }
    cout << mx<<" "<<mn << endl;
    for(auto u:m){
        cout << u.first << " " << u.second << endl;
    }
    cout << endl;
    cout << s << endl;
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