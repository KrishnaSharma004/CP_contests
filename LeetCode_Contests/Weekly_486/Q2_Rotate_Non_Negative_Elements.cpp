#include <iostream>
using namespace std;

void rotate2(vector<int>& nums, int k){
    k %= nums.size();
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end()); 
    reverse(nums.begin(),nums.end());
}

vector<int> rotateElements(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> pos;
        for(int i=0;i<n;++i){
            if(nums[i] >= 0) pos.push_back(nums[i]);
        }
        if(pos.size() < 2) return nums;
        rotate2(pos, k);

        int pnt_pos = 0;
        for(int i=0;i<n;++i){
            if(nums[i] >= 0){
                nums[i] = pos[pnt_pos];
                pnt_pos++;
            }
        }
        return nums;
}

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0;i<n;++i)
        cin >> a[i];

    vector<int> ans = rotateElements(a, k);

    for(int x : ans ) cout << x << " ";

    return 0;
}