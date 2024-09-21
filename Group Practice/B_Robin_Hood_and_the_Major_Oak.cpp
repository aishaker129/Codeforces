#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;


int main(){
    optimize();

    int t; cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll diff = n-k+1;
        ll res = (diff+n)*k/2;
        if(res%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}