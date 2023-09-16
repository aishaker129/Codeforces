#include<bits/stdc++.h>
using namespace std;

int main(){
 int n;
 cin>>n;
 int a = (n/10)%10;
 int b = n%10;
 if(a==0 || b==0){
    cout<<"YES"<<endl;
 }
 else if(a<b){
    if(b%a==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
 }
 else{
    if(a%b==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
 }
 //cout<<a<<" "<<b<<endl;
    return 0;
}
