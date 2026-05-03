#include <bits/stdc++.h>
using namespace std;

vector<int> minCost(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> age(n - 1);
        age[0] = 1;
        for(int i = 1 ; i < n - 1 ; ++i){
            if(abs(nums[i] - nums[i + 1]) < abs(nums[i] - nums[i - 1])){
                age[i] = 1;
            }else{
                age[i] = abs(nums[i] - nums[i + 1]);
            }
        }
        vector<int> back(n - 1);
        back[n - 2] = 1;
        for(int i = n - 2 ; i > 0 ; --i){
            if(abs(nums[i] - nums[i - 1]) <= abs(nums[i] - nums[i + 1])){
                back[i - 1] = 1;
            }else{
                back[i - 1] = abs(nums[i] - nums[i - 1]);
            }
        }
        //prefix sum age and back : 
        for(int i = 1 ; i < n - 1 ; ++i){
            age[i] = age[i - 1] + age[i];
            back[i] = back[i - 1] + back[i];
        }
        int m = queries.size();
        vector<int> ans(m);
        for(int i = 0 ; i < m ; ++i){
            if(queries[i][0] > queries[i][1]){
                if(queries[i][1] != 0){
                    ans[i] = back[queries[i][0] - 1] - back[queries[i][1] - 1];
                }else{
                    ans[i] = back[queries[i][0] - 1];
                }
            }
            else if(queries[i][0] < queries[i][1]){
                if(queries[i][0] != 0){
                    ans[i] = age[queries[i][1] - 1] - age[queries[i][0] - 1];
                }else{
                    ans[i] = age[queries[i][1] - 1];
                }
            }else{
                ans[i] = 0;
            }
        }
        return ans;
    }

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(auto &i : nums) cin >> i;
    int m;
    cin >> m;
    vector<vector<int> > q;
    for(int i = 0 ; i < m ; ++i){
        vector<int> temp;
        int x,y;
        cin >> x >> y;
        temp.push_back(x);temp.push_back(y);
        q.push_back(temp);
    }
    vector<int> ans = minCost(nums, q);
    for(auto &i : ans) cout << i << " ";
    return 0;
}