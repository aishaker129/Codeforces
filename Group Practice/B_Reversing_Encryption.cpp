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

    int n; cin>>n;
    string s;
    cin>>s;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            reverse(s.begin(),s.begin()+i);
        }
    }

    cout<<s<<endl;

    return 0;
}