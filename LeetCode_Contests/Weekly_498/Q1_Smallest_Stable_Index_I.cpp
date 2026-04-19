#include <bits/stdc++.h>
using namespace std;

int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> pr_mx(n);
        pr_mx[0] = nums[0];
        for(int i = 1 ; i < n ; ++i){
            if(nums[i] > pr_mx[i - 1]){
                pr_mx[i] = nums[i];
            }else pr_mx[i] = pr_mx[i - 1];
        }
        vector<int> sf_min(n);
        sf_min[n - 1] = nums[n - 1];
        for(int i = n - 2 ; i >= 0 ; --i){
            if(nums[i] < sf_min[i + 1]){
                sf_min[i] = nums[i];
            }else sf_min[i] = sf_min[i + 1];
        }
        int idx = -1;
        for(int i = 0 ; i < n ; ++i){
            if(pr_mx[i] - sf_min[i] <= k){
                idx = i;
                break;
            }
        }
        return idx;
    }

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &i : a) cin >> i;

    cout << firstStableIndex(a, k) << '\n';

    return 0;
}