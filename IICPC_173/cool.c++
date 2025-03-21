#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++){
        int num;
        cin >> num;
        freq[num]++;
        if (freq[num] > 1){
            cout << "1\n" << num << "\n";
            return;
        }
    }

    cout << "-1\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}




// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     unordered_set<int> complementSet;

//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//         complementSet.insert(a[i]); // Store elements for quick lookup
//     }

//     // A trivial cool subsequence of length 1 exists if there's any duplicate
//     unordered_map<int, int> freq;
//     for (int num : a) {
//         freq[num]++;
//         if (freq[num] > 1) {
//             cout << "1\n" << num << "\n";
//             return;
//         }
//     }

//     // No duplicate found, return -1
//     cout << "-1\n";
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }
