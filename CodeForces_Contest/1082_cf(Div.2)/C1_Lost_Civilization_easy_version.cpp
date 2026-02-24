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
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);    
        for(int &i : a) cin >> i;

        int cnt = 1;
        int prv = a[0];
        for(int i = 1 ; i < n ; ++i){
            if(a[i - 1] + 1 == a[i] || a[i] == a[i - 1] && a[i] > prv){
                continue; 
            }else{
                if(a[i] > prv && a[i - 1] > a[i]){
                    continue;
                }
                else{
                    cnt++;
                    prv = a[i];
                }
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}