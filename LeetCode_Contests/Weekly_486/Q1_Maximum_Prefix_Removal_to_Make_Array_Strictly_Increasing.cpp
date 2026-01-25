#include <iostream>
using namespace std;

int minimumPrefixLength(vector<int>& nums) {
        int n = nums.size();
        int min_l = 0;

        for(int i=0 ;i < n-1 ; ++i){
            if(nums[i+1] <= nums[i])
                min_l = i+1;
        }
        return min_l ;
    }

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;++i)
        cin >> a[i];

    cout << minimumPrefixLength(a) << '\n';

    return 0;
}