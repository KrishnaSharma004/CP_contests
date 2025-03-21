#include<iostream>
#include<vector>
using namespace std;

int maxFelemel(vector<int>& a,int x){
    long long sum =0;
    for(int num:a){
        sum+=num;
    }
    return sum-(x-1);
}

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        vector<int> arr(n);
        for(int i=0;i<n;++i){
            cin >> arr[i];
        }
        cout << maxFelemel(arr,n)<<endl;
    }
    return 0;
}