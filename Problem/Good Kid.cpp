#include<bits/stdc++.h>
using namespace std;

int main(){
 int t; cin>>t;
 int n;

 for(int i=0; i<t;i++){
     int product=1;
    cin>>n;
    int a[n];
    for(int j=0; j<n; j++){
        cin>>a[j];
    }
    sort(a,a+n);

    for(int j=0; j<n; j++){
        if(j==0){
            a[j]=a[j]+1;
        }
        product *=a[j];
    }
    cout<<product<<endl;
 }
 return 0;
}
