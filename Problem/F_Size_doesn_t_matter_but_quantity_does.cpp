#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;

void solve(){
    int n; cin>>n;
    if(n==1){
        cout<<0<<endl;
    }
    else{
        double a = 1,b = 1, c = -(2*(n-1));
        double r = b*b-4*a*c;
        double res = (-b+sqrt(r))/(2*a);
        double res1 = (-b-sqrt(r))/(2*a);
        res = max(res,res1);
        cout<<ceil(res)<<endl;
    }
}

int main(){
    optimize();

    int t; cin>>t;
    while(t--){
        solve();
    }

    return 0;
}