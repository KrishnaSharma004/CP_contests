#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void krishna(){
    int a,b;
    cin >> a >> b;

    if(b >= a )cout << -1 << '\n';
    else {
        if(a/2 < b)
            cout << a-b << '\n';
        else cout << min(a/2, b) << '\n';
    }
}
int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("Input.txt","r", stdin);
    freopen("Output.txt","w", stdout);
#endif
    int t;
    cin >> t;
    while(t--){
        // cout << "case : " << t << '\n';
        krishna();
    }
    return 0;
}
