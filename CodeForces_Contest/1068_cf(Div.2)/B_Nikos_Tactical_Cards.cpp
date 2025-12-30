#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long mn = 0,mx = 0;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;++i) 
            cin >> a[i];
        for(int i=0;i<n;++i) 
            cin >> b[i];
        for(int i=0;i<n;++i){
            long long nx_mn = min({mn - a[i], b[i] - mn, mx - a[i], b[i] - mx});
            mx = max({mn - a[i], b[i] - mn, mx - a[i], b[i] - mx});
            mn = nx_mn;
        }
        cout << mx << "\n";
    }
    return 0;
}