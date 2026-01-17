#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int get_mex(const vector<int>& arr, int start, int end) {
    set<int> elements;
    for (int i = start; i <= end; i++) {
        elements.insert(arr[i]);
    }
    int mex = 0;
    while (elements.count(mex)) {
        mex++;
    }
    return mex;
}

bool check(int n, vector<int>& a) {
    for (int i = 0; i < n - 1; i++) {
        if (get_mex(a, 0, i) == get_mex(a, i + 1, n - 1)) {
            return false;
        }
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());
    if (check(n, a)) {
        cout << "YES" << endl;
        return;
    }

    reverse(a.begin(), a.end());
    if (check(n, a)) {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}