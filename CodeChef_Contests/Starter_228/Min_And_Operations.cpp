#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans = 0;
        for(int i = 0 ; i <= n ; i += 2){
            ans += i;
        }
        cout << ans << '\n';
    }
    return 0;
}