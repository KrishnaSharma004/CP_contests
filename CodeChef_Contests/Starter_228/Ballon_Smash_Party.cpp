#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;
        
        vector<int> ans;
        ans.reserve(n);
        
        int pos = 0;
        
        for (int val : a) {
            if (val <= pos) {
                ans.push_back(val);
            } else {
                ans.push_back(pos);
                pos++;     
            }
        }
        
        for (int i = 0; i < n; ++i) {
            cout << ans[i] << " ";
        }
        cout << '\n';
    }
}