/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 18/02/2024 
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
        int sum = 0;
        for(int i=1; i<n; i++){
            if(s[i]=='*' && s[i+1]=='*') break;
            else if(s[i]=='@') sum++;
            
        }
        cout<<sum<<endl;
    }

    return 0;
}