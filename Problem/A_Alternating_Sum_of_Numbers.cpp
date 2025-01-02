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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int sum = 0;
        if (n % 2 == 0)
        {
            for (int i = 0; i < n; i += 2)
            {
                sum += a[i] - a[i + 1];
            }
        }
        else
        {
            for (int i = 0; i < n - 1; i += 2)
            {
                sum += a[i] - a[i + 1];
            }
            sum += a[n - 1];
        }

        cout << sum << endl;
    }

    return 0;
}