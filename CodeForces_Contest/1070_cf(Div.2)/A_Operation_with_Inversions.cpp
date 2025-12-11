#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;++i){
            cin >> a[i];
        }
        int operations = 0;
        int max_prefix = a[0];

        for (int j = 1; j < n; ++j) {
            if (a[j] < max_prefix) {
                operations++;
            } else {
                max_prefix = a[j];
            }
        }

        cout << operations << endl;
    }
    return 0;
}