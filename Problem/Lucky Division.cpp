#include<bits/stdc++.h>
using namespace std;

int main(){
 string s;
 cin>>s;
 int n=s.size();
 bool flag=false;
 for(int i=0; i<n; i++){
    if(s[i]=='4' or s[i]=='7'){
       flag =true;
    }

    else{
        int a = stoi(s);
        if(a%4==0 or a%7==0 or a%44==0 or a%47==0 or a%74==0 or a%77==0 or a%444==0 or a%447==0 or a%474==0 or a%477==0 or a%744==0 or a%747==0 or a%777==0){
            flag = true;
        }
        else{
            flag = false;
            break;
        }
    }

 }
 if(flag){
    cout<<"YES"<<endl;
 }
 else{
    cout<<"NO"<<endl;
 }
 return 0;
}
