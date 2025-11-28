#include <iostream>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long n;
        cin >> n;

        long long best = 0;

        for (long long i = 1; i <= n; ++i) {
            for (long long j = 1; j <= n; ++j) {
                long long v = (i - 1) * n + j;
                long long cost = v;

                // up
                if (i > 1) cost += v - n;
                // down
                if (i < n) cost += v + n;
                // left
                if (j > 1) cost += v - 1;
                // right
                if (j < n) cost += v + 1;

                best = max(best, cost);
            }
        }

        cout << best << endl;
    }
}