/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 14/03/2024 
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
        int n,ne=0,p=0; cin>>n;
        for(int i=0; i<n; i++) {
            int a;
            cin>>a;
            if(a<0) ne++;
            else p++;
        }
        int cnt = 0;
        while(p<ne){
            ne--;
            p++;
            cnt++;
        }

        if(ne%2!=0) cnt++;
        cout<<cnt<<endl;
    }

    return 0;
}