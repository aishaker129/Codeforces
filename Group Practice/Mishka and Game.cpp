#include<iostream>
using namespace std;

int main(){
 int n; cin>>n;
 int a,b;
 int m=0,c=0;
 for(int i=0; i<n; i++){
    cin>>a>>b;
    if(a>b){
        m=m+1;
    }
    if(a<b){
        c=c+1;
    }
 }
 if(m>c){
    cout<<"Mishka"<<endl;
 }
 else if(m<c){
    cout<<"Chris"<<endl;
 }
 else{
    cout<<"Friendship is magic!^^"<<endl;
 }
 return 0;
}
