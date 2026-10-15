#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void krishna(){
    string a;
    cin >> a;

    int n = a.size();
    int ans = 1;
    //block check : 
    int b = 1;
    for(int i = 0 ; i < n-1 ; ++i){
        if(a[i] == a[i+1]) b++;
        else b = 1;
        if(b == 3){
            ans++;
            break;
        }
    }
    for(int i = 1 ; i < n-1 ; ++i){
        if(a[i-1] != a[i] && a[i+1] != a[i]){
            ans++;
            break;
        }
    }
    cout << ans << '\n';
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
