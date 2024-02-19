/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 19/02/2024 
*/ 
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main(){
    optimize();

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a=0,b=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='A') a++;
            else b++;
        }
        if(a>b) cout<<"A"<<endl;
        else cout<<"B"<<endl;
    }

    return 0;
}