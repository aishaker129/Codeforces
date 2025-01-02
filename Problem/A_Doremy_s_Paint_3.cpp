/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 04/03/2024 
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
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        //sort(a,a+n);

        vector<int> v;
        map<int,int> m;

        for(auto u:a) m[u]++;
        if(m.size()>2) cout<<"No"<<endl;
        else if(m.size()==2){
            for(auto u:m){
                v.push_back(u.second);
            }

            if(abs(v[1]-v[0])>1) cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
        }
        else cout<<"Yes"<<endl;
    }

    return 0;
}