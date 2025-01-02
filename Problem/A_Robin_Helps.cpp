#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;


int main(){
    optimize();

    int t; cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int cnt = 0,r = 0;
        for(int i=0; i<n; i++){
            int a; cin>>a;
            if(a>=k){
                r +=a;
            }
            else if(a==0){
                if(r>0){
                    cnt++;
                    r--;
                }
            }
        }

        cout<<cnt<<endl;
    }

    return 0;
}