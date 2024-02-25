/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 26/02/2024 
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
        int num = s.size();
        int l=0, r = num-1;

        while(s[l]!=s[r] && num>0){
            l++;
            r--;
            num -=2;
        }

        cout<<num<<endl;
    }

    return 0;
}