#include<iostream>
using namespace std;

int main(){
    int t;cin >> t;
    while(t--){
        int x,y,z;
        cin >> x >> y >> z;
        int l = max(x-y,x-z);
        int r = min(x+y,x+z);
        if(l>r){
            cout << 0 << endl;
            continue;
        }
        int count = r-l+1;
        if(x<=r && l<=x){
            count -= 1;
        }
        cout << max(count,0) << endl;
    }
    return 0;
}
