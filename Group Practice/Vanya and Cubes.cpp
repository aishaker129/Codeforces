#include<bits/stdc++.h>
using namespace std;

int main(){
 int n; cin>>n;
 int h=0;
 int sum =0,i=1;
    while(n>0){
    sum +=i;
    if((n-sum)>=0){
        h++;
    }
    n=n-sum;
    i++;
 }
 cout<<h<<endl;

 return 0;
}
