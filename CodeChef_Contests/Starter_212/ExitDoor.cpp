#include <iostream>
#include <istream>
#include <ostream>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <algorithm>
#include <iterator>
#include <string>
#include <locale>
#include <cctype>
#include <cstring>
#include <complex>
#include <valarray>
#include <numeric>
#include <cmath>
#include <cfenv>
#include <cfloat>
#include <cinttypes>
#include <climits>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <cassert>
#include <cstdarg>
#include <cctype>
#include <clocale>
#include <csignal>
#include <cwchar>
#include <cwctype>
#include <cstddef>
#include <cinttypes>
#include <cstdbool>
#include <cstdint>
#include <cfenv>
#include <cfloat>
#include <climits>
using namespace std;

using ll = long long;
using usize = size_t;

class BIT {
private:
    vector<ll> bit; 
    usize size;  
public:
    explicit BIT(usize n) : bit(n + 1, 0), size(n) {}

    void add(int pos, ll delta) {
        for (int i = pos; i <= static_cast<int>(size); i += i & -i) bit[i] += delta;
    }

    ll prefix_sum(int pos) const {
        ll s = 0;
        for (int i = pos; i > 0; i -= i & -i) s += bit[i];
        return s;
    }

    ll range_sum(int l, int r) const {
        if (l > r) return 0;
        return prefix_sum(r) - prefix_sum(l - 1);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        int n;
        cin >> n;
        vector<int> perm(n + 1);
        for (int i = 1; i <= n; ++i) cin >> perm[i];
        BIT bit(n);
        ll result = 0;
        for (int i = 1; i <= n; ++i) {
            int value = perm[i];
            ll lessCount = bit.range_sum(1, value - 1);
            ll maxLess = static_cast<ll>(value - 1);
            ll greaterCount = maxLess - lessCount;

            result += min(lessCount, greaterCount);
            bit.add(value, 1);
        }

        cout << result << '\n';
    }

    return 0;
}
