#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (count(s.begin(), s.end(), '0') == 0){
            cout << 0 << endl;
            continue;
        }

        string ss = s + s;
        vector<int> dist(2 * n, 1e9);

        int last_one = -1;
        for (int i = 0; i < 2 * n; i++) {
            if (ss[i] == '1') {
                last_one = i;
                dist[i] = 0;
            } else if (last_one != -1) {
                dist[i] = i - last_one;
            }
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                ans = max(ans, dist[i + n]); 
            }
        }
        cout << ans << endl;
    }
    return 0;
} 