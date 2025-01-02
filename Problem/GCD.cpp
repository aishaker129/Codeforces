#include<bits/stdc++.h>
using namespace std;

int main(){
 int a,b,c,d;
 cin>>a>>b;
 vector<int> v,v1;
 for(int i=1;i<=a;i++){
    if(a%i==0){
        c=i;
        v.push_back(c);
    }
 }
 for(int i=1;i<=b;i++){
    if(b%i==0){
        d=i;
        v1.push_back(d);
    }
 }
 int m=v.size();
 int n=v1.size();
 sort(v.begin(), v.end(), greater<int>());
 sort(v1.begin(), v1.end(), greater<int>());
 int counter = 0;
 for(int i=0;i<m;i++){
    for(int j=0;j<n; j++){
        if(v[i]==v1[j]){
            counter =v[i];
            break;
        }
    }
    if(counter>0){
        break;
    }
 }
 cout<<counter;
return 0;
}
