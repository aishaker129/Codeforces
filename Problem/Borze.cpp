#include<bits/stdc++.h>
using namespace std;

int main(){
 string s;
 cin>>s;
 int n=s.length();
 //cout<<n<<endl;
 for(int i=0; i<n; i++){
    if(s[i]=='.'){
        cout<<0;
    }
    if(s[i]=='-'){
        if(s[i+1]=='.'){
            cout<<1;
        }
        else{
            cout<<2;
        }
        i=i+1;
    }
 }
 cout<<endl;
 return 0;
}

