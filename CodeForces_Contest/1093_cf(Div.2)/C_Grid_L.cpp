#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

void solve(){
    ll p, q;
    cin >> p >> q;

    for(ll n = 1; n <= 1e5 ; ++n){
        ll num = (p + 2*q - n);
        if(num <= 0 || num % (2*n + 1)) continue;
        ll m = num / (2*n + 1);
        if(m < n) break;
        ll qmx = n*(n + 1) + (m-n)*n;
        if(qmx < q) continue;
        cout << n << " " << m << '\n';
        return; 
    }
    cout << -1 << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    solve();
    return 0;
}
