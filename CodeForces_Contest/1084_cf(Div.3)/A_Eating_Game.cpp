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
        vector<int> hs(11, 0);
        for(int i = 0 ; i < n ; ++i){
            int x;
            cin >> x;
            hs[x]++;
        }
        int ele = 1;
        for(int i = 10 ; i >= 0 ; --i){
            if(hs[i] != 0){
                ele = i;
                break;
            }
        }
        cout << hs[ele] << '\n';
    }    
    return 0;
}