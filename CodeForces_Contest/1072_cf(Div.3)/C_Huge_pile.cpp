#include <iostream>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;

    if (k > n) {
        cout << -1 << endl;
        return;
    }

    long long divisor = 1; 
    for (int d = 0; d <= 31; ++d) {
        long long low = n / divisor;
        long long high = (n + divisor - 1) / divisor;
        if (low == k || high == k) {
            cout << d << endl;
            return;
        }
        if (high < k)
            break;
        if (d < 31) divisor *= 2;
        else break;
    }
    cout << -1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}