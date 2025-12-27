#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string r;
        cin >> r;
        vector<int> s_positions;
        for (int i = 0; i < (int)r.size(); i++) {
            if (r[i] == 's') s_positions.push_back(i);
        }
        if (s_positions.empty()) {
            // Need to add two 's' and fix the middle block(even ke liye '+1')
            int n = r.size();
            cout << n/2 + 1 << "\n";
            continue;
        }
        if (s_positions.size() == 1) {
            // Need one more 's'
            cout << 1 << "\n";
            continue;
        }

        int ops = 0;
        // Check gaps between consecutive 's'
        for (int i = 0; i + 1 < (int)s_positions.size(); i++) {
            int gap = s_positions[i+1] - s_positions[i] - 1;
            if (gap > 0 && gap % 2 == 0) {
                ops++;
            }
        }
        cout << ops << "\n";
    }
    return 0;
}