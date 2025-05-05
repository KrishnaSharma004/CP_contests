#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <map>
#include <cstring>
#include <unordered_map>
#include <algorithm>
using namespace std;
#define ll long long 
#define vint vector<int>
#define vll vector<long long>
#define vchar vector<char>
#define vstr vector<string>
#define rr(x) x.begin(),x.end()
#define nl endl
#define str string
#define si set<int>
#define pb(x) push_back(x)
#define ull unsigned long long 
#define floop(i,a,b) for(int i=a;i<b;++i)
#define sp " "
#define mii map<int,int>
#define fauto(i,x) for(auto i:x)
#define vpint vector<pair<int,int> >
#define umpint unordered_map<int,int>
#define vvint vector<vector<int> > 
#define maxelem(x) *max_element(x.begin(),x.end())
#define minelem(x) *min_element(x.begin(),x.end())

void logic(){
    // ll n,k;
    // cin >> n >> k;
    // ll mmn = LLONG_MAX;
    // ll maxm = LLONG_MIN;
    // ll sm = 0;
    // floop(i,0,n){
    //     ll a;
    //     cin >> a;
    //     if(a<mmn) mmn =a;
    //     if(a>maxm) maxm = a;
    //     sm += a;
    // }
    // if((maxm - mmn) >k){
    //     cout << "Jerry" << nl;
    // }else{
    //     if(sm&1) cout << "Tom" << nl;
    //     else cout << "Jerry" << nl;
    // }
    int n,k;
    cin >> n >>k;
    vll a(n);
    ll mmin = LLONG_MAX;
    ll mx = LLONG_MIN;
    ll sm = 0;
    floop(i,0,n){
        cin >> a[i];
        sm += a[i];
        mmin = min(mmin,a[i]);
        if(a[i]>mx ) mx = a[i];
        else mx = mx;
    }
    int count = 0;
    floop(i,0,n) if(a[i] == mx) count++;
    if(mx - mmin > k+1 || (mx - mmin == k+1 && count >1)) cout << "Jerry" << nl;
    else{
        if(sm % 2) cout << "Tom" << nl;
        else cout << "Jerry" << nl;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}