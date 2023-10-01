#include<bits/stdc++.h>
using namespace std;


int main(){
 int t; cin>>t;
 int n;
 while(t--){
    int n; cin >> n;
    int a = 1;
    for(int i = 1; i <= n; i++){
        cout << a << " ";
        a += 2;
    }
   cout<<endl;

 }
 return 0;
}

