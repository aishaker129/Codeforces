#include<iostream>
using namespace std;



int main(){
 int t; cin>>t;
 long long a,b,sl,sr;

 for(int i=0; i<t; i++){
    cin>>a>>b;
    if(a<b){
    a=a-1;
    sl=(a*(a+1))/2;
    sr=(b*(b+1))/2;
    cout<<sr-sl<<endl;
 }
 else{
    b=b-1;
    sl=(a*(a+1))/2;
    sr=(b*(b+1))/2;
    cout<<sl-sr<<endl;
 }
 }
 return 0;
}
