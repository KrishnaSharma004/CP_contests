#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define ll long long 
#define vint vector<int>
#define vll vector<long long>
#define vchar vector<char>
#define rr(x) x.begin(),x.end()
#define nl endl
#define str string
#define si set<int>
#define pb(x) push_back(x)
#define sp " "
#define MODD 998244353

int odd(int a){
    if(a%2==1) return 1;
    else return 0;
}


ll modE(ll bs,ll ep,ll md){
    ll rslt = 1;
    bs = bs % md;
    while(ep>0){
        if(ep & 1) rslt = (rslt*bs) % md;
        bs = (bs*bs)%md;
        ep >>= 1;
    }
    return rslt;
}

void solve(){
    int n;
    cin >> n;

    ll finalans ;
    if(odd(n)){
        finalans = modE(2,n-1,MODD);
    }else{
        finalans = (3*modE(2,n-2,MODD))%MODD;
    }

    cout << finalans << nl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}