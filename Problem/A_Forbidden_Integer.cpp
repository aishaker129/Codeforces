/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 09/03/2024 
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
        int n,k,x;
        cin>>n>>k>>x;
        
        if(x!=1){
            if(n!=1){
                cout<<"YES"<<endl;
                cout<<n<<endl;
                for(int i=0; i<n; i++) cout<<1<<" ";
                cout<<endl;
            }
            else cout<<"NO"<<endl;
        }
        else{
            if(n==1 and k!=1){
                cout<<"YES"<<endl;
                cout<<1<<endl;
                cout<<1<<endl;
            }
            else if(n==1) cout<<"NO"<<endl;
            else if(n%2==1 and k>2){
                n -=3;
                cout<<"YES"<<endl;
                cout<<(n/2)+1<<endl;
                for(int i=0; i<n; i+=2){
                    cout<<2<<" ";
                }
                cout<<3<<endl;
            }
            else if(n%2==0 and k>=2){
                cout<<"YES"<<endl;
                cout<<(n/2)<<endl;
                for(int i=0; i<n; i+=2){
                    cout<<2<<" ";
                }
                cout<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}