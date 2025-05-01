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

inline int cp1(ll a){
    return __builtin_popcountll(a);
}

ll mmi2(ll x){
    if(x==0) return 2;
    int y = cp1(x);
    if(y>=2) return x;
    floop(i,0,31){
        if(!((x>>i) & 1)){
            ll z = 1LL << i;
            return x + 2*z;
        }
    }
    return x+2;
}
void logic(){
    ll n,x;
    cin >> n >> x;
    if(n==1){
        if(x>0) cout << x << nl;
        else cout <<-1<< nl;
        return ;
    }
    ll answer = LLONG_MAX;
    int mxk = (int)min<ll>(n,30);
    floop(i,1,mxk+1){
        int xrons = (int)((n-i) & 1);
        ll njr = x^xrons;
        ll ks = LLONG_MAX;
        if(i==1){
            if(njr>0) ks = njr;
        }else if(i==2){
            ks = mmi2(njr);
        }else{
            if(njr == 0 && i==3){
                ks = 6;
            }else if (cp1(njr) >= i){
                ks = njr;
            }
        }
        if(ks < LLONG_MAX){
            answer = min(answer,(n-i)+ks);
        }
    }
    if(answer == LLONG_MAX){
        cout << -1 << nl;
    }else{
        cout << answer << nl;
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