#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int t;cin>> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> b(n);

        long long sum = 0;
        int count_z = 0;
        for(int i=0;i<n;++i){
            cin >> b[i];
            sum += b[i];
            if(b[i]==0) count_z++;
        }
        long long count_pos = n-count_z;
        int ans = min(sum-n+1,count_pos);

        cout << ans << endl;
    }

    return 0;
}