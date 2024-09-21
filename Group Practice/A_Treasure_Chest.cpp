#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;


int main(){
    optimize();
    int t; cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a>b){
            cout<<a<<endl;
        }
        else{
            if(b-a<=c) cout<<b<<endl;
            else{
                int res = b+b-(a+c);
                cout<<res<<endl;
            }
        }
    }

    return 0;
}