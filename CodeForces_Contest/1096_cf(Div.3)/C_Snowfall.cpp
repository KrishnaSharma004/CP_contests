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
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    vector<int> ans;
    vector<int> div6;
    vector<int> div2;
    vector<int> div3;
    vector<int> non;
    for(int i = 0 ; i < n ; ++i){
        if(a[i]%6 == 0) div6.pb(a[i]);
        else if(a[i]%2 == 0){
            div2.pb(a[i]);
        }
        else if(a[i]%3 == 0) div3.pb(a[i]);
        else non.pb(a[i]);
    } 
    for(auto &i : div6) ans.pb(i);
    for(auto &i : div2) ans.pb(i);
    for(auto &i : non) ans.pb(i);
    for(auto &i : div3) ans.pb(i);
    for(auto &i : ans) cout << i << " ";
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
