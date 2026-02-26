#include <bits/stdc++.h>

using namespace std; 
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()


int32_t main(){
	std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    cin >>  t;
    while(t--){
        int n , m , d;
        cin >> n >> m >> d;

        int wt = 0;
        int cur = m;
        int k = n - 1;
        int ans = 1;
        for(int k = n ; k >= 1 ; k--){
            if(wt > d){
                ans++;
                wt = 0;
            }
            wt += m;
        }
        cout << ans << '\n';
    }
    return 0;
}