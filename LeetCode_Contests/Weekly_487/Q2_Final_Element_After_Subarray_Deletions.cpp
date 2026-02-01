#include <iostream>
using namespace std;

int finalElement(vector<int>& nums) {
    int n = nums.size();
    if(n == 1) return nums[0];

    return max(nums[0],nums[n-1]);
}
int main(){
    int n;
    cin >> n ;
    vector<int> a(n);
    for(int i = 0 ;i < n ;++i)
        cin >> a[i];

    cout << finalElement(a) << '\n';
    
    return 0;
}