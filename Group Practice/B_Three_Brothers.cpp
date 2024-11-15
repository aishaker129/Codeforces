#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;


int main(){
    optimize();

    int a,b;
    cin>>a>>b;

    if(a==1 and b==2) cout<<3<<endl;
    else if(a==2 and b==1) cout<<3<<endl;
    else if(a==3 and b==1) cout<<2<<endl;
    else if(a==1 and b==3) cout<<2<<endl;
    else if(a==2 and b==3) cout<<1<<endl;
    else cout<<1<<endl;
    return 0;
}