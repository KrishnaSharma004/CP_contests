#include <bits/stdc++.h>
using namespace std;

int func(int n){
        int ans = 0;
        while(n){
            int lst = n % 10;
            ans = ans*10 + lst;
            n /=10;
        }
        return ans;
    }
    int sumOfPrimesInRange(int n) {
        int r = func(n);
        int nn = min(n,r);int nr = max(n,r);
        vector<bool> prime(1005, true);
        prime[0] = false;
        prime[1] = false;
        for(int i = 2 ; i*i <= 1005 ; ++i){
            if(prime[i] == true){
                for(int j = i*i ; j <= 1005 ; j+=i){
                    prime[j] = false;
                }
            }
        }
        int ans = 0;
        for(int i = nn ; i <= nr ; ++i){
            if(prime[i]){
                ans += i;
            }
        }
        return ans;
    }

int main(){
    int n;
    cin >> n;
    cout << sumOfPrimesInRange(n) << '\n';
    return 0;
}