#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        int n;
        cin >> n;
        int hf = n/2;
        if(n%2==0){
            int ans = pow((hf-1),2);
            cout << ans << endl;
        }else{
            cout << hf*(hf-1) << endl;
        }
    }
    return 0;
}