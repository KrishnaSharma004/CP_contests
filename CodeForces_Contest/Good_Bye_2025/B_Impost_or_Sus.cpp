#include <iostream>
#include <vector>
using namespace std;
#define ll long long 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string r;
        cin >> r;
        ll ans = 0;
        if(r[0]=='u'){
            r[0] = 's';
            ans++;
        }
            
        if(r.back()=='u'){
            r.back() = 's';
            ans++;
        }
        
        vector<pair<char,int>> blocks(1,{'s',1});
        for(int i=1;i<r.size();++i)
            if(r[i] == blocks.back().first) blocks.back().second++;
            else blocks.push_back({r[i],1});
        /*Odd blocks pe itrate karenge cuz that will be of 'u'*/
        for(int i=1;i<blocks.size();i+=2)
            ans += blocks[i].second/2;
        cout << ans << "\n";
    }
    return 0;
}