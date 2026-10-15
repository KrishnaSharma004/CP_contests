#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void krishna(){
    int n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for(auto &i : a) cin >> i;

    for(int i = 1 ; i < n ; ++i){
        a[i] += a[i-1];
    }
    vector<int> mod(k, 0);
    ll ans = 0;
    int i = k;
    int j = 0;
    while(i < n){
        int req = a[i]%k;
        if(req == 0) ans++;
        ans += mod[req];
        mod[a[j]%k]++;
        i++;
        j++;
    }
    cout << ans << '\n';
}
int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("Input.txt","r", stdin);
    freopen("Output.txt","w", stdout);
#endif
    int t;
    cin >> t;
    while(t--){
        // cout << "case : " << t << '\n';
        krishna();
    }
    return 0;
}
