#include <bits/stdc++.h>

using namespace std; 
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define ll long long
#define all(x) x.begin(), x.end()

int maxim_idx(vector<ll> &a){
    int n = a.size();
    int max_ele = a[0];
    int max_idx = 0;
    for(int i = 1; i < n ; ++i){
        if(a[i] >= max_ele){
            max_ele = a[i];
            max_idx = i;
        }
    }
    return max_idx;
}
int32_t main(){
	std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    cin >>  t;
    while(t--){
        ll x;
        cin >> x;

        vector<ll> digits;
        ll temp = x;
        int sum = 0;
        while(temp != 0){
            int lst = temp % 10;
            sum += lst;
            digits.pb(lst);
            temp /= 10;
        }
        reverse(all(digits));
        if(sum < 10){
            cout << 0 << '\n';
        }else{
            int k = 0;
            while(sum > 9){
                int mx_idx = maxim_idx(digits);
                if(mx_idx == 0){
                    if(digits[mx_idx] == 1){
                        continue;
                    }
                    sum -= digits[mx_idx] - 1;
                    digits[mx_idx] = 1;
                }else{
                    sum -= digits[mx_idx];
                    digits[mx_idx] = 0;
                }
                k++;
                if(sum <= 9) break;
            }
            cout << k << '\n';
        }
    }
    return 0;
}