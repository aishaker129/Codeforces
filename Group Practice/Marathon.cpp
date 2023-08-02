#include<iostream>
using namespace std;

int main(){
 int n; cin>>n;
 int a,b,c,d;
 for(int i=0; i<n; i++){
    cin>>a>>b>>c>>d;
    int p=0;
    if(a<b){
        p=p+1;
    }
    if(a<c) p=p+1;
    if(a<d) p= p+1;
    cout<<p<<endl;
 }
 return 0;
}
