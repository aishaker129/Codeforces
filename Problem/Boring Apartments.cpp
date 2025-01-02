#include<bits/stdc++.h>
using namespace std;

int main(){
 int t; cin>>t;
 int n;
 for(int i=0; i<t; i++){
    cin>>n;
    int s=0,c=0,l;
    while(n>0){
        l=n%10;
        n=n/10;
        c++;
        s += c;
    }
    int ans =(l-1)*10+s;
    cout<<ans<<endl;
 }
 return 0;
}
