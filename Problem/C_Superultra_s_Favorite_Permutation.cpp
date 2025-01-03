#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
typedef long long ll;


void solve()
{

    int n;
    cin >> n;

    if (n < 5)
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        cout << 1 << " " << 3 << " ";
        for (int i = 7; i <=n; i += 2){
            cout << i << " ";
        }
        cout << 5 << " " << 4 << " 2 ";
        for (int i = 6; i <= n; i+=2){
            cout << i << " ";
        }
        cout << endl;
    }
}

int main()
{
    optimize();

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}