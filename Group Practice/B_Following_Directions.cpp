/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 10/02/2024 
*/ 
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main(){
    optimize();

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s;
        cin>>s;
        int x=0,y=0;
        bool f = false;
        for(int i=0; i<n; i++){
            if(s[i]=='L'){
                x--;
            }
            if(s[i]=='R'){
                x++;
            }
            if(s[i]=='U'){
                y++;
            }
            if(s[i]=='D'){
                y--;
            }

            if(x==1 && y==1){
                f = true;
                break;
            }
        }

        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}