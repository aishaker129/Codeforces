/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 01/03/2024 
*/ 
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

bool solve(string s,int n){
    string str ="...";
    //bool f = true;
    int cnt=0;
    for(int i=0; i<n-2; i++){
        if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.'){
            cnt =3;
            break;
        }  
    }

    if(cnt==3) return 1;
    else return 0;
}
int main(){
    optimize();
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s;
        cin>>s;

        bool f = solve(s,n);
        if(f){
            cout<<2<<endl;
        }
        else{
            int cnt = 0;
            for(int i=0; i<n; i++){
                if(s[i]=='.') cnt++;
            }

            cout<<cnt<<endl;
        }
    }

    return 0;
}