#include <bits/stdc++.h>
using namespace std;

int countCommas(int n) {
    if(n < 1000) return 0;
    n -= 999;
    return n;
}
int main(){
    int n;
    cin >> n;

    cout << countCommas(n) << '\n';
    return 0;
}