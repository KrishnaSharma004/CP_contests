#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long s, k, m;
        cin >> s >> k >> m;

        long long n = m / k;
        long long r = m % k;

        if (n % 2 == 0) {
            cout << max(0LL, s - r) << endl;
        } else {
            cout << max(0LL, min(s, k) - r) << endl;
        }
    }
    return 0;
}