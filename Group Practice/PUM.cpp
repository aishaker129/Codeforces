#include<bits/stdc++.h>
using namespace std;

int main(){
 int t; cin>>t;
 int index=1;
 for(int i=1; i<=t; i++){
    for(int j=index; j<index+4;j++){
        if(j%4!=0){
            cout<<j<<" ";
        }
        else{
            cout<<"PUM";
        }

    }
     index =i*4+1;
    cout<<endl;
 }
 return 0;
}
