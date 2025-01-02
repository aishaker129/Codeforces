#include<bits/stdc++.h>
using namespace std;

int main(){
 long long n,k; cin>>n>>k;
 long long mid;
 if(n%2==0){
    mid = n/2;
 }
 else{
    mid = (n+1)/2;
 }
 if(k>mid){
    cout<<(k-mid)*2<<endl;
 }else{
    cout<<(k*2)-1<<endl;
 }
 return 0;
}
