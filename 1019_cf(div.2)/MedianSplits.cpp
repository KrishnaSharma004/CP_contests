#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <map>
#include <cstring>
#include <unordered_map>
using namespace std;
#define ll long long 
#define vint vector<int>
#define vll vector<long long>
#define vchar vector<char>
#define vstr vector<string>
#define vbool vector<bool>
#define rr(x) x.begin()+1,x.end()
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
#define bk break
void logic(){
    ll n;
    ll k;
    cin >> n >> k;
    static vll a(200005),p(200005);
    floop(i,1,n+1){
        cin >> a[i];
    }
    p[0]=0;
    floop(i,1,n+1){
        int cc = (a[i] <= k?1:-1);
        p[i]=p[i-1]+cc;
    }
    ll total = p[n];
    ll mall = p[1];
    ll hgood = (p[1]>=0);
    ll mgood = (p[1]>= 0 ? p[1]:LLONG_MAX);
    ll fnd = 0;
    for(int i=2;i<n && !fnd;++i){
        ll ppr = p[i];
        if(hgood && mgood <= ppr){
            fnd=1;
            bk;
        }
        if(hgood && ppr <= total){
            fnd = 1;
            bk;
        }
        if(mall <= ppr && ppr <= total){
            fnd=1;
            bk;
        }
        if(ppr < mall) mall = ppr;
        if(ppr >= 0){
            if(!hgood || ppr<mgood){
                mgood = ppr;
            }
            hgood = 1;
        }
    }
    if(fnd) cout << "YES" << nl;
    else cout << "NO" << nl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}