#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  int n;
  for(int i=0; i<t; i++){
    cin>>n;
    int s1=0,s2=0;
    if(n%2!=0){
        cout<<"NO"<<endl;
    }
    else{
            cout<<"YES"<<endl;
        int a[n];
        for(int j=1; j<100; j++){
            for(int k=1; k<=n/2;k++){
                if(j%2==0){
                    a[k]=j;
                }
                s1 +=j;
            }
            for(int k=(n/2)+1; k<n;k++){
                if(j%2!=0){
                    a[k]=j;
                    s2 +=j;
                }
            }
            int l=s1-s2;
            a[n]=l;
            break;


        }
        for(int j=1; j<=n; j++){
            cout<<a[j]<<" ";
        }
        cout<<endl;

    }
  }
  return 0;
}
