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

// bool solve(string s,string str, int m,int n){
//     bool f = false;
//     if(n>m){
//         for(int i=0; i<s.size(); i++){
//             string t = s.substr(i,m);
//             if(t == str){
//                 f = true;
//                 break;
//             }
//         }
//     }
    
//     return f;
// }
int main(){
    optimize();

    T{
        int n,m;
        cin>>n>>m;
        string s,str;
        cin>>s>>str;
        int cnt = 0;
        bool f = false;
        while(n<=26*m){
            
            if(s.find(str)!=string::npos){
                f = true;
                break;
            }
            s +=s;
            n +=n;
            cnt++;
        }
        if(f) cout<<cnt<<endl;
        else cout<<-1<<endl;
    }

    return 0;
}