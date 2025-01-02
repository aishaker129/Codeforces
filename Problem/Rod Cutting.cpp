#include<bits/stdc++.h>
using namespace std;

int solve(int length,int n,int len[],int profit[]){
 int a[n+1][length+1];
 for(int i=0; i<=n; i++){
    for(int j=0; j<=length; j++){
        if(i==0 || j==0){
            a[i][j]=0;
        }
        else if(len[i]<=j){
            a[i][j]=max(profit[i]+a[i][j-len[i]],a[i-1][j]);
        }
        else{
            a[i][j]= a[i-1][j];
        }
    }
 }
 return a[n][length];
}

int main(){
 int length;
 cin>>length;
 int n;
 cin>>n;
 int len[n],profit[n];
 for(int i=1; i<=n; i++){
    cin>>len[i]>>profit[i];
 }
 cout<<solve(length,n,len,profit)<<endl;
 return 0;
}
