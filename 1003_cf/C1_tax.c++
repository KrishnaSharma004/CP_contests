#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

int t;
cin >> t;
while(t--){
int n, m;
cin >> n >> m;
vector<long long> a(n), b(m);
for (int i = 0; i < n; i++){
 cin >> a[i];
}
for (int j = 0; j < m; j++){
cin >> b[j];
}
sort(b.begin(), b.end());

// We'll use a greedy strategy.
// curr holds the last chosen value in our non-decreasing sequence.
// For safety, we set curr to a very small number.
const long long INF = 1LL << 60; // A large number (~1e18)
 long long curr = -(1LL << 60);
bool possible = true;

for (int i = 0; i < n; i++){
// Option 1: Do nothing.
long long cand1 = INF;
if(a[i] >= curr) 
cand1 = a[i];

// Option 2: Use the operation.
 // We need b[j] such that b[j] >= curr + a[i]
 long long target = curr + a[i];
 long long cand2 = INF;
 auto it = lower_bound(b.begin(), b.end(), target);
if(it != b.end()){
 cand2 = (*it) - a[i];
}

 // Choose the smallest candidate that is >= curr.
 long long chosen = min(cand1, cand2);
 if(chosen == INF){
     possible = false;
 break;
 }
 curr = chosen;
 }

 cout << (possible ? "YES" : "NO") << "\n";
 }

 return 0;
}