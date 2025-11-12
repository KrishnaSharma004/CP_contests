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

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        int cnt0 = 0, cnt1 = 0;
        for(int i = 0; i < n - 1; i++) {
            if(s[i] == '0' && s[i + 1] == '0'){
                cnt0++;
            }
            if(s[i] == '1' && s[i + 1] == '1'){
                cnt1++;
            }
        }
        if(cnt1 >= cnt0) {
            cout << 0 << endl;
        } else {
            int dif = cnt0 - cnt1;
            cout << (dif + 1) / 2 << endl;;
        }
    }
    return 0;
}