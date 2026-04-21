#include <bits/stdc++.h>
using namespace std;
#define f first
//#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

void solve(){
    int n;
    cin >> n;
    string a, b;
    cin >> a;
    cin >> b;
    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        int cv = (a[i-1] != b[i-1]) ? 1 : 0;
        dp[i] = min(dp[i], dp[i-1] + cv);
        
        if (i >= 2) {
            int ch = (a[i-2] != a[i-1]) + (b[i-2] != b[i-1]);
            dp[i] = min(dp[i], dp[i-2] + ch);
        }
    }
    cout << dp[n] << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
