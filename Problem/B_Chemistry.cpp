/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 15/03/2024 
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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        unordered_map<char,int> m;
        for(int i=0; s[i]; i++){
           if (m.find(s[i]) == m.end()) {
                m.insert(make_pair(s[i], 1));
            }
            else{
                m[s[i]]++;
            }
        }

        int cnt = 0;
        for(auto u:m){
            if(u.second%2==1) cnt++;
           
        }
        

        if(cnt<=k+1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}