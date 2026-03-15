#include <bits/stdc++.h>

using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;
const int n = 1e5 + 5;

void solve() {
    int n;
    cin >> n;
    vector<int> c(n), p(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i] >> p[i];
    }

    double max_p = 0;
    for (int i = n - 1; i >= 0; i--) {
        double p_f = 1.0 - (p[i] / 100.0);
        
        max_p = max(max_p, c[i] + p_f * max_p);
    }

    cout << fixed << setprecision(10) << max_p << endl;
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
