/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 10/02/2024 
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
        vector<int> a,b;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            if(i%2==0){
                a.push_back(x);
            }
            else{
                b.push_back(x); 
            }
        }

        int sum1 = 0, sum2 = 0;
        for(int i=0; i<a.size(); i++){
            sum1 += a[i];
        }

        for(int i=0; i<b.size(); i++){
            sum2 +=b[i];
        }

        if(sum1%2==0 && sum2%2==0){
            cout<<"YES"<<endl;
        }
        else if(sum1%2==1 && sum2%2==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }

    return 0;
}