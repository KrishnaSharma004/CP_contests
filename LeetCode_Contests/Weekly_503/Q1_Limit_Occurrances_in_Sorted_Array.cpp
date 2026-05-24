#include <bits/stdc++.h>
using namespace std;

vector<int> limitOccurrences(vector<int>& nums, int k) {
        int n = nums.size();
        int cnt = 1;
        int i = 1;
        while(i < n){
            if(nums[i] == nums[i-1]){
                cnt++;
                if(cnt > k){
                    while(nums[i] == nums[i-1]){
                        nums.erase(nums.begin() + i);
                        n--;
                        if(i >= n) break;
                    }
                }
                if(i >= n) break;
                if(nums[i] != nums[i-1]) cnt = 1;
                i++;
            }else{
                cnt = 1;
                i++;
            }
        }
        return nums;
    }

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    vector<int> ans = limitOccurrences(a,k);
    for(auto &i : ans) cout << i << " ";
    cout << '\n';
    return 0;
}