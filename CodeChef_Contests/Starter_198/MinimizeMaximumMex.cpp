#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <map>
#include <cstring>
#include <unordered_map>
#include <deque>
#include <numeric>
#include <algorithm>
#include <set>
#include <queue>
using namespace std;

#define ll long long 
#define vint vector<int>
#define vll vector<long long>
#define vchar vector<char>
#define vstr vector<string>
#define vtiii vector<tuple<int,int,int> >
#define as(x) x.begin(),x.end()
#define ds(y) y.rbegin(),y.rend()
#define nl endl
#define str string
#define si set<int>
#define ull unsigned long long 
#define floop(i,a,b) for(int i=a;i<b;++i)
#define sp " "
#define mii map<int,int>
#define fauto(i,x) for(auto &i:x)
#define vpint vector<pair<int,int> >
#define vpll vector<pair<ll,ll> >
#define umpint unordered_map<int,int>
#define vvint vector<vector<int> > 
#define vvll vector<vector<ll> > 
#define vpib vector<pair<int,bool> >
#define maxelem(x) *max_element(x.begin(),x.end())
#define minelem(x) *min_element(x.begin(),x.end())
#define MOD (ll)(1e9+7)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vint A(n), B(n);
        floop(i, 0, n) cin >> A[i];
        floop(i, 0, n) cin >> B[i];

        vint p(n + 2, 0), both(n + 2, 0);

        floop(i, 0, n) {
            int a = A[i], b = B[i];
            if (a == b) {
                both[a] += 1;
                p[a] += 2;
            } else {
                p[a] += 1;
                p[b] += 1;
            }
        }

        int candidate1 = 0;
        while (p[candidate1] > 0) candidate1++;

        vint L;
        floop(x, 0, candidate1) {
            if (p[x] >= 1 && both[x] == 0) {
                L.push_back(x);
            }
        }

        int candidate2 = (L.size() >= 2) ? L[1] : n + 1;
        int ans = min(candidate1, candidate2);
        cout << ans << nl;
    }

    return 0;
}
