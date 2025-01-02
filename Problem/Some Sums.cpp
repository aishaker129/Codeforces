#include<bits/stdc++.h>
using namespace std;

int last(int n){
 int sum = 0;
 while(n>0){
    int num = n%10;
    sum +=num;
    n = n/10;
 }
 return sum;
}

int main(){
 int n,a,b;
 cin>>n>>a>>b;
 int s=0;

 for(int i=1; i<=n;i++){
    int last_digit = last(i);
    if(last_digit>=a and last_digit<=b){
        s += i;
    }
 }

 cout<<s<<endl;
}
