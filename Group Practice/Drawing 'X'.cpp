#include<bits/stdc++.h>
using namespace std;

int main(){
 int n; cin>>n;
 int i,j;
 int b=n+1;
 int a=(n/2)+1;
for(i=1; i<=n; i++){
    for(j=1; j<=n; j++){
       if(i==a and j==a) cout<<"X";
       else if((i+j)==b) cout<<"/";
       else if(i==j) cout<<"\\";
       else cout<<"*";
    }
    cout<<endl;
}
 return 0;
}
