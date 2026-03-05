#include <iostream>
using namespace std;
typedef long long ll;
void solve() {
    ll n, q;
    cin >> n >> q;
    ll k = (n + q) / (q + 1);
    ll error = k / 2;

    cout << error << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}