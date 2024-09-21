#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;


int main(){
    optimize();
    int n; cin>>n;
    int cnt1=0,cnt2=0,cnt3=0,cnt4=0;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        if(a==1){
            cnt1++;
        }
        else if(a==2) cnt2++;
        else if(a==3) cnt3++;
        else cnt4++;
    }
    int res = cnt4;
    if(cnt2 % 2==0){
        cnt2 /=2;
        res +=cnt2;
        cnt2 = 0;
    }
    else{
        if(cnt2>2){
            cnt2 =(cnt2-1)/2;
            res +=cnt2;
            cnt2 = 1;
        }
    }
    if(cnt3 > cnt1){
        res +=cnt3;
        cnt1 = 0;
    }
    else{
        res +=cnt3;
        cnt1 -=cnt3;
    }

    int extra = cnt1 + (cnt2*2);
    int ans = ceil((double)extra/4);
    res +=ans;
    cout<<res<<endl;
    

    return 0;
}