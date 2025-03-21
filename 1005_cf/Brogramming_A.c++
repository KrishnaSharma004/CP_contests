#include <iostream>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int moves = 0;
       
        for (int i = 1; i < n; i++){
            if(s[i] != s[i - 1])
                moves++;
        }
       
        if(s[0] == '1')
            moves++;
        
        cout << moves << "\n";
    }
    return 0;
}