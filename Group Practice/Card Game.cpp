#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
using namespace std;
const int mx = 2e5 + 50;
long long a[mx], rep[mx];
int testCase(){
    int n; cin >> n;
    for(int i = 0; i <= n+2; i++){
        rep[i] = 0;
    }
    for(int i = 0; i < n; i++) cin >> a[i];

    for(int i = n-1; i >= 0; i--){
        rep[i] = rep[i+1] + (a[i] >= 0 ? a[i]:0);
    }
    long long  ans = 0;
    for(int i = 0; i < n; i++){
        ans = max(ans, rep[i+1] + (i % 2 == 0 ? a[i]:0));
    }
    cout << ans << "\n";
}

int main(){
    int t; cin>>t;
    for(int i=0; i<t; i++){
        testCase();
    }

 return 0;
}
