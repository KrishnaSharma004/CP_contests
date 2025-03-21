#include <iostream>
#include <vector>
using namespace  std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> a(n);
        for(int i=0;i<n;++i){
            cin >>a[i];
        }
        int bestL = 0, bestR = 0 ;
        int bestDelta =0;
        for(int j =0;j<n;++j){
            int cntGreater = 0 , cntless =0;
            for(int r = j+1;r<n;++r){
                if(a[r]>a[j])
                cntGreater++;
                else if(a[r]<a[j])
                cntless++;

                int delta = cntGreater - cntless;
                if(delta<bestDelta){
                    bestDelta=delta;
                    bestL = j;
                    bestR = r;
                }
            }
        }

        cout << bestL+1 <<" "<<bestR+1<<endl;
    }
    return 0 ;
}