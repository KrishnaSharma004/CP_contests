#include <bits/stdc++.h>

using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    map<int, int> mp;
    int max_f = 0;
    for (int i = 0; i < n * n; i++) {
        int c;
        cin >> c;
        mp[c]++;
        max_f = max(max_f, mp[c]);
    }

    if (n == 1) {
        cout << "NO" << '\n';
        return;
    }
    if (max_f > (n * n - n)) 
        cout << "NO" << '\n';
    else 
        cout << "YES" << '\n';
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
