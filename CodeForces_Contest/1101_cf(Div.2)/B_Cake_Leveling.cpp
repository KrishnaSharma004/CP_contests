#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void krishna(){
    int n;
    cin >> n;
    vector<ll> a(n);
    for(auto &i : a) cin >> i;

    ll sum = 0;
    ll mn = a[0];
    vector<ll> ans(n);
    for(int i = 0 ; i < n ; ++i){
        sum += a[i];
        ans[i] = min(mn,sum/(i+1));
        mn = min(mn, ans[i]);
    }
    for(auto &i : ans) cout << i << " ";
    cout << '\n';
}
int32_t main(){
    int t;
    cin >> t;
    while(t--) 
    krishna();
    return 0;
}