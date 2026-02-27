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
        vector<int> a(n);
        for(int &i : a) cin >> i;

        bool check = 0;
        for(int i = 0; i < n - 1 ; ++i){
            if(a[i] > a[i + 1]){
                check = 1;
                break;
            }
        }
        if(check) cout << 1 << '\n';
        else cout << n << '\n';
    }    
    return 0;
}