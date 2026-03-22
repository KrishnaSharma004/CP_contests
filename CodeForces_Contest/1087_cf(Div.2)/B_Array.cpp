#include <bits/stdc++.h>

using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

void solve(){
    int n;
    cin >> n;
    vector<ll> a(n);
    for(auto &i : a) cin >> i;
        
    vector<int> ans(n, 0);
        
    for(int i = 0; i < n; i++){
        if(i == n - 1){ 
            ans[i] = 0; 
            continue; 
        }
        vector<ll> suf;
        for(int j = i + 1; j < n; j++) suf.pb(2 * a[j]);
        sort(all(suf));
        int sz = suf.size();
            
        ll ai2 = 2 * a[i];
        int best = 0;
        best = max(best, (int)(suf.end() - upper_bound(all(suf), ai2)));
        best = max(best, (int)((lower_bound(all(suf), ai2)) - suf.begin()));
        
        for(int j = i+1; j < n; j++){
            ll mid = a[i] + a[j];
            if(a[j] == a[i]) continue;
            int cnt;
            if(a[j] > a[i]){
                cnt = (int)(suf.end() - upper_bound(all(suf), mid));
            }else{
                cnt = (int)(lower_bound(all(suf), mid) - suf.begin());
            }
            best = max(best, cnt);
        }  
        ans[i] = best;
    }  
    for(int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}