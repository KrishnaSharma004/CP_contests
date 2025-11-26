#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int numC,numElem;
        cin >> numC>>numElem;

        vector <int> freq(numC+1,0);
        vector <int> col(numElem);

        for(int i=0;i<numElem;++i){
            cin >> col[i];
            freq[col[i]]++;
        }

        vector <int> cum_count(numC+2,0);
        for(int i=numC;i>=1;i--){
            cum_count[i]=freq[i]+cum_count[i+1];
        }
        long long ans = 0;
        for(int i=1;i<numC;++i){
            int Lcount = cum_count[i];
            int Rcount = cum_count[numC-i];
            int cmnCount = cum_count[max(i,numC-i)];
            ans += static_cast<long long>(Lcount)*Rcount-cmnCount;
        }
        cout << ans << endl;
    }
    return 0;
}