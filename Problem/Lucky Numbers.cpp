#include<bits/stdc++.h>
using namespace std;

int main(){
 int a,b,c;
 cin>>a>>b;
 vector<int> v;
 bool found = false;
 for(int i=a; i<=b; i++){
    if(i==4 || i==7 || i==44||i==47||i==74||i==77||i==444||i==447||i==474||i==477||i==744||i==747||i==774||i==777||i==4444||i==4447||i==4474||i==4477||i==4744||i==4747||i==4774||i==4777||i==7444||i==7447||i==7474||i==7477||i==7744||i==7747||i==7774||i==7777||i==44444||i==44447||i==44474||i==44477){
        c = i;
        v.push_back(c);
        found = true;
    }
 }
 int n = v.size();
 sort(v.begin(), v.end(), greater<int>());
 for(int i=0; i<n; i++){
    cout<<v[i]<<" ";
 }
 cout<<endl;
return 0;
}
