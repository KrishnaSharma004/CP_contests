#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

void solve(){
    ll x, y;
    cin >> x >> y;

    ll m = y / x;
    ll i = 2;
    ll temp = x;
    bool check = false;
    while(i < m){
        temp += x;
        if(y % temp != 0){
            check = true;
            break;
        }
        i++;
    }
    if(check) cout << "Yes" << '\n';
    else cout << "No" << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
