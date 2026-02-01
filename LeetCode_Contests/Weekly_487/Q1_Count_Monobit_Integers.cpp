#include <iostream>
using namespace std;

int countMonobit(int n) {
    int ans = 0;
    if (n == 0)
        return 1;
    if (n == 1)
        return 2;
    ans = 2;
    int nn = 2;
    int p = 2;
    for (int i = 2; i <= n; ++i) {
        if (i == ((1 << p) - 1)) {
            p++;
            ans++;
        }
    }
    return ans;
}

int main(){
    int n;
    cin >> n;

    cout << countMonobit(n) << '\n';
    
    return 0;
}