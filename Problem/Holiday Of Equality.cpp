#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    int c=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int max = 0;
    for(int i=0; i<n; i++){
        if(a[i]>=max){
            max = a[i];
        }
    }
    for(int i=0; i<n; i++){
        if(a[i]<max){
            c+=(max-a[i]);
        }
    }
    cout<<c<<endl;
}
