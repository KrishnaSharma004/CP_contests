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
using int64 = long long;
const int64 LOW = 0;
const int64 HIGH = 2000000000LL;
void solve(){
    int n;
    int64 target;
    cin >> n >> target;

    vector<int64> arr(n);
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    map<int64,int> events;

    for (int i = 0; i < n; ++i){
        if (arr[i] == target) continue;
        int64 reflected = 2LL * arr[i] - target;
        int64 leftEnd  = min(target, reflected);
        int64 rightEnd = max(target, reflected);
        int64 L = leftEnd + 1;
        int64 R = rightEnd - 1;
        if (L > R){
            continue;
        }
        if (R < LOW || L > HIGH){
            continue;
        }
        L = max(L, LOW);
        R = min(R, HIGH);
        events[L] += 1;
        events[R + 1] -= 1;
    }
    if(events.empty()){
        cout << 0 << '\n';
        return;
    }
    int64 bestCount = -1;
    int64 bestValue = 0;
    int64 currCoverage = 0;

    for (auto it = events.begin(); it != events.end(); ++it){
        int64 pos = it->first;
        currCoverage += it->second;

        auto nextIt = it;
        ++nextIt;
        int64 nextPos = (nextIt != events.end() ? nextIt->first : (HIGH + 2));

        int64 segL = max(pos, LOW);
        int64 segR = min(nextPos - 1, HIGH);
        if (segL <= segR){
            if (currCoverage > bestCount){
                bestCount = currCoverage;
                bestValue = segL;
            }
        }
    }
    if (bestCount <= 0){
        cout << 0 << '\n';
    }else{
        cout << bestValue << '\n';
    }
}
int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
