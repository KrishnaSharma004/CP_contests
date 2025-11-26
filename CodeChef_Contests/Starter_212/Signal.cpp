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
#define f first
#define s second 
#define pb push_back
int main(){
	int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int sl_cnt=0;
        int pl_cnt=0;
        for(int i=0;i<n;++i){
            if(s[i]=='0'){
                sl_cnt = sl_cnt + 1;
            }
            if(s[i]=='1' && sl_cnt>0){
                pl_cnt = pl_cnt + 1;
            }
        }
        cout << pl_cnt << endl;
    }
	return 0;
}