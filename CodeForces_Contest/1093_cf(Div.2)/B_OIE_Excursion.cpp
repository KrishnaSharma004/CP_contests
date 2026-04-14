#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

void solve(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(auto &i :a) cin >> i;

    int sm = 1;
    bool ok = 0;
    for(int i = 0; i < n - 1 ; ++i){
        if(a[i + 1]%m == a[i]%m) sm++;
        else sm = 1;

        if(sm >= m){
            ok = 1;
        }
    }
    if(ok) cout << "NO" << '\n';
    else cout << "YES" << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
