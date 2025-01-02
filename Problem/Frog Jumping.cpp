#include<bits/stdc++.h>
using namespace std;

int main(){
int t;cin>>t;
long long a,b,c;
while(t--){
    cin>>a>>b>>c;
    long long sum=0;
    if(c%2==0){
        sum = a*(c-c/2) - b*(c/2);
    }
    else{
        sum = a*(c-c/2) - b*(c/2);
    }
    cout<<sum<<endl;
}
return 0;
}
