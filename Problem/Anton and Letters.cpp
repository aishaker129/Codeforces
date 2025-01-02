#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
 string s;
getline(cin,s);
 for(int i=0; i<s.length(); i++){
    s[i]= tolower(s[i]);
 }

 sort(s.begin(),s.end());

 int counter = 0;
 for(int i=0; i<s.length(); i++){
    if(s[i]>='a' && s[i]<='z'){
        if(s[i]!=s[i+1]){
            counter++;
        }
    }
 }
 cout<<counter<<endl;
 return 0;
}

