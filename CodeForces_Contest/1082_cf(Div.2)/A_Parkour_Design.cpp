#include <bits/stdc++.h>

using namespace std; 
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()

int32_t main(){
	std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        long long x, y;
        cin >> x >> y;
        if ((x - 2 * y) % 3 != 0) {
            cout << "NO\n";
            continue;
        }
        if (y >= 0) {
            if (x >= 2 * y) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } else {
            if (x + 4 * y >= 0) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}