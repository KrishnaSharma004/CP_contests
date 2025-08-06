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
        str A;
        cin >> A;

        // If n is a power of two, it's impossible
        if ((n & (n - 1)) == 0) {
            cout << -1 << nl;
            continue;
        }

        int flips = 0;

        // 1) Force all minimal masks (powers of two) to be '1'
        int p = 1;
        while (p <= n) {
            if (A[p - 1] == '0') {
                flips++;
            }
            p <<= 1;
        }

        // 2) Force all maximal masks to be '0'
        int L = 0;
        while ((1 << L) <= n) L++;

        floop(i, 1, n + 1) {
            bool has_sup = false;
            floop(b, 0, L) {
                if (!(i & (1 << b))) {
                    int j = i | (1 << b);
                    if (j <= n) {
                        has_sup = true;
                        break;
                    }
                }
            }
            if (!has_sup && A[i - 1] == '1') {
                flips++;
            }
        }

        cout << flips << nl;
    }

    return 0;
}
