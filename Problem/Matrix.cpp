#include<bits/stdc++.h>
using namespace std;

int main(){
 int n;
 cin>>n;
 int a[n][n];
 for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cin>>a[i][j];
    }
 }
 int d1=0,d2=0;
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        if(i==j){
            d1 +=a[i][j];
        }
        else if(j==(n-1-i)){
            d2 += a[i][j];
        }
    }
 }
  int ans = d1-d2;
  if(ans>0){
    cout<<ans<<endl;
  }
  else{
    cout<<0-ans<<endl;
  }
 return 0;
}

