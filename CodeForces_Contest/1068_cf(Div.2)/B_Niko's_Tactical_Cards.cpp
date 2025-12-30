#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long mn = 0,mx = 0;
        for(int i=0;i<n;++i){
            int a,b;
            cin >> a >> b;
            long long nx_mx = min({mn-a,b-mn,mx-a,b-mx});
            mx = max({mn-a,b-mn,mx-a,b-mx});
            mn = nx_mx;
        }
        cout << mx << "\n";
    }
    return 0;
}