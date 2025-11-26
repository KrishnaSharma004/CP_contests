#include <iostream>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        long long x,y,pm;
        cin >> x >> y >> pm;
        long long total = 2*pm*1;
        long long p = 2*(x+y);
        long long fCycle = total/p;

        if(fCycle * p +2*x>total) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}