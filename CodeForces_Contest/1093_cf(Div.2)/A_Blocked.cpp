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
    vector<int> a(n);
    for(auto &i :a) cin >> i;

    vector<int> cnt(101);
    bool dp = 0;
    for(int i = 0; i < n ; ++i){
        cnt[a[i]]++;
        if(cnt[a[i]] > 1){
            dp = 1;
        }
    }
    if(dp){
        cout << -1 << '\n';
    }else{
        sort(all(a));
        reverse(all(a));
        for(auto &i : a) cout << i << " ";
        cout << '\n';
    }
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
