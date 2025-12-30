#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        int sleep_cnt = 0;
        int i = 0;
        int level = 0;
        for(char c : s){
            if(c == '1'){
                level = k;
            }
            else sleep_cnt += level-- <= 0;
        }
        cout << sleep_cnt << "\n";
    }
    return 0;
}