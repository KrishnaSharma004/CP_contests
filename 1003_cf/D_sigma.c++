#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct ArrayData {
 long long sum; // sum of elements in this array
 long long score; // score of this array = sum of prefix sums
};

int main(){
 ios::sync_with_stdio(false);
 cin.tie(nullptr);
 int t;
cin >> t;
while(t--){
int n, m;
cin >> n >> m; // There will be n arrays each of length m.
// The total number of elements (n*m) over all test cases is <= 2e5.
vector<ArrayData> arr(n);
long long constantPart = 0; // sum of Score_i for all arrays.
for (int i = 0; i < n; i++){
long long running = 0;
long long score_i = 0;
long long sum_i = 0;
for (int j = 0; j < m; j++){
int x;
cin >> x;
sum_i += x;
running += x;
score_i += running;
}
arr[i].sum = sum_i;
arr[i].score = score_i;
constantPart += score_i;
}

// We want to maximize m * sum_{r=1}^{n} (n-r)*Sum_{p_r}.
// To maximize that sum, sort the arrays in descending order of arr[i].sum.
sort(arr.begin(), arr.end(), [](const ArrayData &A, const ArrayData &B){
 return A.sum > B.sum;
});

long long additional = 0;
// In sorted order, the array placed in position r (0-indexed) gets a multiplier of (n-1-r).
for (int r = 0; r < n; r++){
additional += (long long)(n - 1 - r) * arr[r].sum;
 }

long long ans = constantPart + m * additional;
cout << ans << "\n";
}
return 0;
}