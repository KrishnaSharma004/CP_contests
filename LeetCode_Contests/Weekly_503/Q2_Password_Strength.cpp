#include <bits/stdc++.h>
using namespace std;

int passwordStrength(string password) {
        set<char> sp = {'!','@','#','$'};
        set<char> ps;
        for(auto &i : password){
            ps.insert(i);
        }
        int ans = 0;
        for(auto &i : ps){
            if(sp.find(i) != sp.end()){
                ans+=5;
            }else if(i-'a' >= 0 && i-'a' <= 25){
                ans += 1;
            }else if(i-'A' >= 0 && i - 'A' <= 25){
                ans += 2;
            }else{
                ans += 3;
            }
        }
        return ans;
    }

int main(){
    string s;
    cin >> s;
    cout << passwordStrength(s) << '\n';
    return 0;
}