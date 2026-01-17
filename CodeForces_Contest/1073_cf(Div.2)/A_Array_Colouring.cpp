#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;++i)
            cin >> a[i];

        map<int,int> mp;
        for(int i=0;i<n;++i){
            mp.insert({a[i],(i&1)});
        }

        bool check = false;
        int temp = -1;
        for(auto ele : mp){
            if(temp == ele.second){
                check = true;
                break;
            }
            else temp = ele.second;
        }

        if(check) cout << "No" << '\n';
        else cout << "Yes" << '\n';

    }
    return 0;
}