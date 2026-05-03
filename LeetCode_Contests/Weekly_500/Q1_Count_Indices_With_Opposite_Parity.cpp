#include <bits/stdc++.h>
using namespace std;

vector<int> countOppositeParity(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i = 0 ; i < n; ++i){
            int parity = nums[i]%2;
            int cnt = 0;
            for(int j = i ; j < n ; ++j){
                if(nums[j]%2 != parity) cnt++;
            }
            ans.push_back(cnt);
        }
        return ans;
    }

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(auto &i : nums) cin >> i;
    vector<int> ans = countOppositeParity(nums);
    for(auto &i : ans) cout << i << " ";
    return 0;
}