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
void krishna(){
    int n;
    cin >> n;
    vi a(2*n);
    for(auto &i : a) cin >> i;

    vi zeroidx;
    for(int i = 0 ; i < 2*n ; ++i){
        if(a[i] == 0) zeroidx.pb(i);
    }
    ll ans = 0;
    auto findmex = [&](const int ZeroRight, const int ZeroLeft)->void{
        for(int l=ZeroLeft,r=ZeroRight ; l<r ; l++,r--){
            if(a[l] != a[r]){
                return;
            }
        }
        ll right = ZeroRight, left = ZeroLeft;
        while(left>0&&right+1<2*n && a[left - 1] == a[right + 1]){
            left--;
            right++;
        }
        sll el;
        for(int i = left ; i <= right ; ++i){
            el.insert(a[i]);
        }

        ll me = 0;
        while(el.count(me)){
            me++;
        }
        ans = max(ans, me);
    };
    findmex(zeroidx[0],zeroidx[0]);
    findmex(zeroidx[1],zeroidx[1]);
    findmex(zeroidx[0],zeroidx[1]);
    cout << ans << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) krishna();
    return 0;
}
