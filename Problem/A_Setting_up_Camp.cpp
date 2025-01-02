/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 19/03/2024 
*/ 
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define T  int t; cin>>t; while(t--)
int main(){
    optimize();
    T{
        int a,b,c;
        cin>>a>>b>>c;
        int ans = a;
        int res = b%3;
        if(res+c>=3 || res==0){
            int d = ceil((b+c)/3.0);
            cout<<a+d<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }

    return 0;
}