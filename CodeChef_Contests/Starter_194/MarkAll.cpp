#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <map>
#include <cstring>
#include <unordered_map>
#include <deque>
#include <numeric>
using namespace std;
#define ll long long 
#define vint vector<int>
#define vll vector<long long>
#define vchar vector<char>
#define vstr vector<string>
#define vtiii vector<tuple<int,int,int> >
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

struct node{
    ll best1 = LLONG_MAX,best2=LLONG_MAX;
    int idx = -1;
    void add(ll val,int i){
        if(val<best1){
            best2=best1;
            best1=val;
            idx=i;
        }
        else if(val < best2 && i != idx) best2= val;
    }
};
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vll a(n+1);
        floop(i,1,n+1) cin >> a[i];
        vector<node> pref(n+2),suff(n+2);

        floop(i,1,n+1){
            pref[i]=pref[i-1];
            pref[i].add(a[i],i);
        }
        for(int i=n;i>=1;--i){
            suff[i]=suff[i-1];
            suff[i].add(a[i],i);
        }
        ll ans = min(a[1],a[n]);
        floop(i,0,n+1){
            ll pcost = suff[i].best1;
            int pldx = suff[i].idx;
            ll scost = (pref[i+1].idx != pldx) ? pref[i+1].best1:pref[i+1].best2;
            if(scost != LLONG_MAX) ans = min(ans,pcost+scost);
        }
        cout << ans << nl;
    }
    return 0;
}