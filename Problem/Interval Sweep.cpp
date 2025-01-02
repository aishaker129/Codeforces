#include<iostream>
using namespace std;

int main(){
 int n,a;
 cin>>n>>a;
 if(n>a){
    int ans = n - a;
    if(ans>1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
 }
 else if(n%2!=0 and a%2==0 and (a-n==1 || n-a==1)){
    cout<<"YES"<<endl;
 }
 else if(n==a){
    if(n>0 and a>0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
 }
 else{
    if(n<a){

        if((a-n)>1){
          cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

    }

 return 0;
}
