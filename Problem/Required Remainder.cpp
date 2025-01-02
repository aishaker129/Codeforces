#include<iostream>
using namespace std;
int main(){
  int t; cin>>t;
  for(int i=0; i<t; i++){
    long long x,y,n;
    cin>>x>>y>>n;
    for(int k=n; k>=0; k--){
        if(k%x==y){
            cout<<k<<endl;
            break;
        }

    }
  }
  return 0;
}
