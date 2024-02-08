/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 08/02/2024 
*/ 
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main(){
    optimize();

    int n; cin>>n;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<(2*n)-1; j++){
            cout<<'J';
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<(2*n)-1; j++){
            if(j%2==0){
                cout<<'S';
            }
            else{
                cout<<' ';
            }
        }
        cout<<endl;
    }

    return 0;
}