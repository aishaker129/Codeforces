#include<bits/stdc++.h>
using namespace std;


int main(){
 int n; cin>>n;
 vector<int> v,v1,v2,v3;

 int x,a,b,c;
 for(int i=0; i<n; i++){
    cin>>x;
    v.push_back(x);
 }
 for(int i=0; i<n; i++){
    if(v[i]==1){
        a=i;
        v1.push_back(a);
    }
    else if(v[i]==2){
        b=i;
        v2.push_back(b);
    }
    else{
        c=i;
        v3.push_back(c);
    }
 }
 int m=v1.size();
 int o=v2.size();
 int p=v3.size();
 //cout<<m<<" "<<o<<" "<<p<<endl;
 int minn = min(min(m,o),p);
 cout<<minn<<endl;
 int j=0;
 while(minn>0){
    cout<<v1[j]+1<<" "<<v2[j]+1<<" "<<v3[j]+1<<endl;
    j++;
    minn--;
 }
return 0;
}
