#include<bits/stdc++.h>
using namespace std;

int main(){
 int n,m;
 cin>>n>>m;
 char a[n][m];

 for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin>>a[i][j];
    }
 }
 bool found = false;
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        if(a[i][j]=='Y' || a[i][j]=='C' || a[i][j]=='M'){
            found = true;
        }
    }
 }
 if(found){
    cout<<"#Color"<<endl;
 }
 else{
    cout<<"#Black&White "<<endl;
 }
}
