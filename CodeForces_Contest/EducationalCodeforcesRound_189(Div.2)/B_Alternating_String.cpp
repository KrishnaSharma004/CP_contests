#include <bits/stdc++.h>
using namespace std;
#define f first
//#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

bool check(string& s, int start) {
    int n = s.size();
    vector<int> bad;
    for (int i = 0; i < n; i++) {
        char expected = ((i + start) % 2 == 0) ? 'a' : 'b';
        if (s[i] != expected) bad.push_back(i);
    }
    for(auto &i : bad) cout << i << " ";
    cout << '\n';
    if (bad.empty()) return true;
    return bad.back() - bad.front() == (int)bad.size() - 1;
}
void solve(){
    // string str; cin >> str;
    // cout << (check(str, 0) || check(str, 1) ? "YES" : "NO") << '\n';
    string str;
    cin >> str;
    int rs = 0;
    for(int i = 1; i < str.size() ; ++i){
        if(str[i - 1] == str[i]) rs++;
    }
    if(rs >= 3){
        cout << "No" << '\n';
    }else{
        cout << "Yes" << '\n';
    }
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
