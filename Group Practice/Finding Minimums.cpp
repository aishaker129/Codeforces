#include<iostream>
using namespace std;

int main(){
 int n,k; cin>>n>>k;
 int a[n];
 for(int i=0; i<n; i++){
    cin>>a[i];
 }
 int minn;
 int idx=0;
 for(int i=0; i<n; i=i+k){
    minn=a[i+idx];
    int diff = n-(i+k);
    if(diff>0){
        for(int j=i+idx; j<i+k; j++){
            if(minn>a[j]){
                minn = a[j];
            }
        }
        cout<<minn<<" ";
    }
    else{
       for(int j=i+idx; j<n; j++){
            if(minn>a[j]){
                minn = a[j];
            }
        }
        cout<<minn<<" ";
    }
 }
 return 0;
}
