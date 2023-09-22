#include <bits/stdc++.h>
using namespace std;

long long fib(long long n)
{
	long long a = 0, b = 1, c, i;
	if (n == 1)
		return a;
	for (i = 3; i <= n; i++) {
		c = a + b;
		a = b;
		b = c;
	}
	return b;
}

int main()
{
	long long n ; cin>>n;

	cout << fib(n);
	return 0;
}

