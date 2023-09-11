#include<bits/stdc++.h>
using namespace std;

int main(){
 string s,s1,a="hello";
 cin>>s;
 int n = s.size();
 int m=a.size();
 int counter = 0;
 int idex=0;
 for(int i=0; i<m; i++){
    for(int j=idex; j<n; j++){
        if(a[i]==s[j]){
            counter++;
            idex=j+1;
            break;

        }
    }
 }
 if(counter==m){
    cout<<"YES"<<endl;
 }
 else{
    cout<<"NO"<<endl;
 }
 return 0;

}
