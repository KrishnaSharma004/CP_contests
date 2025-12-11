#include <iostream>
#include <vector>
using namespace std;
#define ll long long 
int main() {
    int t;cin >> t;
    while (t--) {
        int n;cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        vector<ll> evens, odds;
        for (auto x : a) {
            if (x % 2 == 0) evens.push_back(x);
            else odds.push_back(x);
        }

        if (odds.empty()) {
            for (int k = 1; k <= n; ++k) cout << 0 << (k == n ? '\n' : ' ');
            continue;
        }

        sort(evens.begin(), evens.end(), greater<ll>());
        sort(odds.begin(), odds.end(), greater<ll>());

        int cntE = (int)evens.size();
        vector<ll> prefE(cntE + 1, 0);
        for (int i = 0; i < cntE; ++i) prefE[i + 1] = prefE[i] + evens[i];
        long long best_odd = odds[0];
        int cntO = (int)odds.size();
        int O_rem = cntO - 1; 

        for (int k = 1; k <= n; ++k){
            int L = max(0, (k - 1) - cntE);
            int need = (L % 2 == 0) ? L : (L + 1);

            if ((k - 1) < need || O_rem < need){
                cout << 0 << (k == n ? '\n' : ' ');
                continue;
            }

            int m_max = min(cntE, (k - 1) - need); 
            ll ans = best_odd + prefE[m_max];
            cout << ans << (k == n ? '\n' : ' ');
        }
    }
    return 0;
}
