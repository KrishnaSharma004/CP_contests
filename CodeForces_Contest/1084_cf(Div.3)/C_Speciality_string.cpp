#include <bits/stdc++.h>

using namespace std; 
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define ll long long
#define all(x) x.begin(), x.end()

int32_t main(){
	std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string str;
        cin >> str;

        vector<char> stk;
        for(int i = 0 ; i < n ; ++i){
            if(stk.size() == 0){
                stk.pb(str[i]);
            }else{
                if(stk.back() == str[i]){
                    stk.pop();
                }else{
                    stk.pb(str[i]);
                }
            }
        }
        cout << (stk.size() == 0 ? "Yes" : "No") << '\n';
    }    
    return 0;
}