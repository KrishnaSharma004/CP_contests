#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void krishna(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    sort(a.begin(), a.end());
    int med = a[n/2];
    int x = 0, y = 0;
    for(int i = 0 ; i < n ; ++i){
        if(a[i] < med) x++;
        if(a[i] > med) y++;
    }
    cout << max(x,y) << '\n';
}
int32_t main(){
    int t;
    cin >> t;
    while(t--) 
    krishna();
    return 0;
}