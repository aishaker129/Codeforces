#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;


int main(){
    optimize();
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        if(n==1 || n==3) cout<<-1<<endl;
        else if(n%2==0){
            for(int i=0; i<n-2; i++){
                cout<<"3";
            }
            cout<<"66"<<endl;
        }
        else{
            for(int i=0; i<n-5; i++){
                cout<<"3";
            }
            cout<<"36366"<<endl;
        }
    }

    return 0;
}