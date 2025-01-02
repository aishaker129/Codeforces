#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;

void solve(){
    string s;
    cin >> s;
    
    if(s.size()>1){
        for (int i = 0; i < s.size(); i++){
            if(s[i]==s[i+1]){
                cout << s[i] << s[i + 1] << endl;
                return;
            }
        }
    }

    if(s.size()>2){
        for (int i = 0; i < s.size() - 2; i++){
            if(s[i] != s[i+2]){
                cout << s[i] << s[i + 1] << s[i + 2] << endl;
                return;
            }
        }
    }

    cout << -1 << endl;
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