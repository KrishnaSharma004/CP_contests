#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
#define vi vector<int> 
#define vll vector<ll> 
#define si set<int> 
#define sll set<ll> 
#define mpii map<int, int> 
#define mpll map<ll, ll> 
#define mpli map<ll, int> 
#define mpil map<int, ll> 
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
typedef long long ll;
void yn(bool condition){
    if(condition){
        yes;
    }else{
        no;
    }
}
void ny(bool condition) { yn(!condition);}
int gcd (int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}
int lcm (int a, int b) {
    return a / gcd(a, b) * b;
}
void solve(){
    int n;
    cin >> n;
    int len = 2 * n;
    vector<int> a(len);
    for (int i = 0; i < len; ++i) {
        cin >> a[i];
    }
    int mx_mex = 0;
    vector<int> pr(n + 1, 0);
    int t = 0;

    auto get_mex = [&](int l, int r) {
        t++;
        for (int i = l; i <= r; ++i) {
            if (a[i] < n) {
                pr[a[i]] = t;
            }
        }
        int mex = 0;
        while (mex <= n && pr[mex] == t) {
            mex++;
        }
        return mex;
    };
    //odd
    for (int i = 0; i < len; ++i) {
        int l = i, r = i;
        while (l >= 0 && r < len && a[l] == a[r]) {
            l--;
            r++;
        }
        l++; r--; 
        if (r >= l) {
            mx_mex = max(mx_mex, get_mex(l, r));
        }
    }
    //even
    for (int i = 0; i < len - 1; ++i) {
        int l = i, r = i + 1;
        while (l >= 0 && r < len && a[l] == a[r]) {
            l--;
            r++;
        }
        l++; r--; 
        if (r >= l) {
            mx_mex = max(mx_mex, get_mex(l, r));
        }
    }
    cout << mx_mex << "\n";
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
