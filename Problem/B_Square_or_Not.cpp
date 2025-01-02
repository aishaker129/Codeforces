#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
typedef long long ll;

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int sq = sqrt(n);
        if (sq * sq != n)
        {
            cout << "No" << endl;
        }
        else
        {
            int cnt1 = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '1')
                {
                    cnt1++;
                }
            }

            if (cnt1 == sq * 4 - 4)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}