#include<bits/stdc++.h>
using namespace std;


int main(){
    int a[1000000]={0};
    for(int i=2;i<=1000000;i++){
        if(a[i]==0){
            for(int j=2; i*j<=1000000;j++){
                a[i*j]==1;
            }
        }
    }
 int n; cin>>n;
 long long int x;
 long long int sq;
 while(n--){
    cin>>x;
    sq = sqrt(x);
    if(sq==1){
        cout<<"NO"<<endl;
    }
    else if(sq*sq==x && a[sq]==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
 }
 return 0;
}
