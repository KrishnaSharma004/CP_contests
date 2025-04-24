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
#define vvint vector<vector<int> > 

void logic(){
    int n;
    ll k;
    cin >>n >> k;
    static vint a(200000),b(200000);
    floop(i,0,n)
        cin >> a[i];
    floop(i,0,n)
        cin >> b[i];

    ll fo_x = -1;
    floop(i,0,n){
        if(b[i] != -1){
            ll xi = a[i] + b[i];
            fo_x = (fo_x == -1 ? xi : fo_x);
            if(fo_x != xi){
                fo_x = LLONG_MAX;
                break;
            }
        }
    }
    if(fo_x == LLONG_MAX){
        cout << 0 << nl;
        return;
    }
    if(fo_x != -1){
        ll x = fo_x;
        int okay = 1;
        floop(i,0,n){
            ll bii = x - a[i];
            if(bii < 0 || bii > k){
                okay = 0;
                break;
            }
        }
        cout << okay << nl;
    }else{
        ll lrn = 0, rn = LLONG_MAX;
        floop(i,0,n){
            if(a[i] > lrn) lrn = a[i];
            ll uupp = a[i] + k;
            if(uupp < rn) rn = uupp;
        }ll ways = (rn >= lrn ? (rn-lrn+1):0);
        cout << ways << nl;
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