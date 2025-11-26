#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <map>
#include <cstring>
#include <unordered_map>
#include <deque>
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
#define vpib vector<pair<int,bool> >
#define maxelem(x) *max_element(x.begin(),x.end())
#define minelem(x) *min_element(x.begin(),x.end())
ll fun(ll a){
    if(a<=1) return 0;
    return 64 - __builtin_clzll(a-1);
}
void logic(){
    int t;
    cin >>t;
    while(t--){
        ll n,m,a,b;
        cin >> n >> m >> a >> b;
        ll x = min(a,n-a+1);
        ll y = min(b,m-b+1);
        ll w = 1+fun(m) + fun(x);
        ll z = 1+fun(n) + fun(y);
        cout << min(w,z) << nl;
    }      
}
int main(){
    logic();
    return 0;
}