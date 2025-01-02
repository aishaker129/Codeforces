#include<bits/stdc++.h>
using namespace std;

int main(){
 int t; cin>>t;
 int n;
 while(t--){
    cin>>n;
    if(n%7==0){
        cout<<n<<endl;
    }
    else{
        int a = n-n%10;
        for(int i=0; i<10; i++){
            if((a+i)%7==0){
                cout<<a+i<<endl;
                break;
            }
        }
    }
 }
 return 0;
}
