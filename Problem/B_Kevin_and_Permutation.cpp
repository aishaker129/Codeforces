#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;

void solve(){
    int n,k;
    cin >> n >> k;
    int a[n+1];
    int m = n;
    int mn = 1;
    a[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        if(i%k==0){
            a[i] = mn;
            mn++;
        }
        else{
            a[i] = m;
            m--;
        }
    }
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        v.push_back(a[i]);
    }
    for (auto u:v){
        cout << u << " ";
    }
    cout << endl;
}

int main(){
    optimize();

    int t; cin>>t;
    while(t--){
        solve();
    }

    return 0;
}