#include <iostream>

using namespace std;

int main() {
    long long N;
    cin >> N;

    for (long long X = 0; X <= 1000000000; X++) {
        long long X_squared = X * X;
        long long remaining = N - X_squared % N;

        if (remaining < 0)
            remaining += N;

        long long Y_squared = remaining % N;
        long long Y = 0;

        while (Y * Y < Y_squared) {
            Y++;
        }
        if (Y * Y == Y_squared) {
            cout << X << " " << Y << endl;
            return 0;
        }
    }
    cout << "No solutions" << endl;
    return 0;
}
