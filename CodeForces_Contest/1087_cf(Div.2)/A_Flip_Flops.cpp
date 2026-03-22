#include <bits/stdc++.h>

using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

void solve(){
    ll n, c, k;
    cin >> n >> c >> k;

    vector<ll> a(n);
    for(ll &i : a) cin >> i;
    sort(all(a));

    for(int i = 0 ;i < n ; ++i){
        if(a[i] <= c){
            if(k > 0){
                if(c - a[i] <= k){
                    k -= c - a[i];
                    c += c;
                }else{
                    c += a[i] + k;
                    k = 0;
                }
            }else{
                c += a[i];
            }
        }
        else{
            break;
        }
    }
    cout << c << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}