/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 07/03/2024 
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
        vector<int> v;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            if (i && v.back() > x) {
                v.push_back(1);
            }
            v.push_back(x);
        }

        cout<<v.size()<<endl;
        for(int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}