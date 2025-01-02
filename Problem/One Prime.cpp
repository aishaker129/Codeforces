#include<iostream>
using namespace std;

int main(){
 int n; cin>>n;
 int i=2;
 bool found = true;
 while(i<=n-1){
    if(n%i==0){
        found = false;
    }
    i++;
 }
 if(found){
    cout<<"YES"<<endl;
 }
 else{
    cout<<"NO"<<endl;
 }
 return 0;
}
