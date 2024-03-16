/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 17/03/2024 
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
        int n; cin>>n;
        string s;
        cin>>s;
        
        int cnt=1,c=1;
        for(int i=1; i<n; i++){
            if(s[i]==s[i-1]) c++;
            else c=1;

            cnt = max(cnt,c);
        }

        cout<<cnt+1<<endl;
    }

    return 0;
}