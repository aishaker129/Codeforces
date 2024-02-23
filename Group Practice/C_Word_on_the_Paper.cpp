/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 23/02/2024 
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
        //char a[8][8];
        vector<char> ch;
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                char a;
                cin>>a;
                if(a!='.'){
                    ch.push_back(a);
                }
            }
        }

        for(auto u:ch){
            cout<<u;
        }
        cout<<endl;
    }

    return 0;
}