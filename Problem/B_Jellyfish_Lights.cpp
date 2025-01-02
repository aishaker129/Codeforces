/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 08/02/2024 
*/ 
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main(){
    optimize();

    int n; cin>>n;
    string s;
    cin>>s;
    char a[n];
    for(int i=0; i<n; i++){
        if(i%2==0){
            a[i] = '1';
        }
        else{
            a[i] = '0';
        }
    }

     char b[n];
    for(int i=0; i<n; i++){
        if(i%2==0){
            b[i] = '0';
        }
        else{
            b[i] = '1';
        }
    }

    int cnt =0, cnt1 = 0;

    for(int i=0; i<n; i++){
        if(s[i]!=a[i]) cnt++;
        if(s[i]!=b[i]) cnt1++;
    }

    cout<<min(cnt,cnt1)<<endl;

    return 0;
}