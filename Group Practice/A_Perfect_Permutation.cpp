/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 13/02/2024 
*/ 
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main(){
    optimize();

    int n; cin>>n;

    if(n%2!=0){
        cout<<-1<<endl;
        return 0;
    }
    else{
        for(int i=n; i>0; i--){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}