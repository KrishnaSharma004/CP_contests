#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,a,b;
        cin >> n >> a >> b;
        
        vector<int> t(n);
        for(int i=0;i<n;++i){
            cin >> t[i];
        }
        
        int wear = 0;
        int count = 0;
        for(int i=0;i<n;++i){
            if(wear == 0){
                if(t[i] < a){
                    wear = 1;
                    count++; 
                }
            }
            if(wear == 1){
                if(t[i] > b){
                    wear = 0;
                }
            }
        }
        cout << count << '\n';
    }
    return 0;
}