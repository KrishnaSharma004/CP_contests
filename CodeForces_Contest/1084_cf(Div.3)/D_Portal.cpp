#include <bits/stdc++.h>

using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(v) v.begin(), v.end()

int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> p(n);
        for(int& i : p) 
            cin >> i;
        vector<int> cycle(p.begin() + x, p.begin() + y);
        p.erase(p.begin() + x, p.begin() + y);
        //ranges::rotate is defined since c++20
        ranges::rotate(cycle, ranges::min_element(cycle));
        auto pos = p.begin();
        while(pos != p.end() && *pos < cycle[0]) pos++;
        p.insert(pos, all(cycle));

        for(int i : p) cout << i << " ";
        cout << '\n';
    }
    return 0;
}