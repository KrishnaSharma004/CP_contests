#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int cntY = count(s.begin(), s.end(), 'Y');
        cout << (cntY <= 1 ? "YES" : "NO") << "\n";
    }
    return 0;
}
