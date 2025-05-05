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
const ll NEG = -1000000000000000000LL;
inline int cp1(ll a){
    return __builtin_popcountll(a);
}
ll GCD(ll x,ll y){
    if(y==0) return x;
    return GCD(y,x%y);
}
void logic(){
    int n;
        ll k;
        cin >> n >> k;
        str s;
        cin >> s;
        vll a(n);
        floop(i,0,n){
            cin >> a[i];
        }

        ll r = 0, known = LLONG_MIN;
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                r = max(r + a[i], a[i]);
                known = max(known, r);
                if(r < 0) r = 0;
            } else {
                r = 0;
            }
        }if(known > k){
            cout << "No" << nl; 
            return;
        }
        int z_po = -1;
        floop(i,0,n){
            if(s[i] == '0'){
                z_po = i;
                break;
            }
        }
        if(z_po == -1){
            if(known == k){
                cout << "Yes" << nl;
                fauto(v,a) cout << v << sp;
                cout << nl;
            } else {
                cout << "No" << nl;
            }
            return;
        }
        int y = z_po;
        ll s_sum = 0, ax = LLONG_MIN;
        bool fndL = false;
        for(int i = y - 1; i >= 0 && s[i] == '1'; i--){
            s_sum += a[i];
            ax = max(ax, s_sum);
            fndL = true;
        }
        ll z = fndL ? ax : 0;
        ll p_sum = 0, Rax = LLONG_MIN;
        bool fndR = false;
        for(int i = y + 1; i < n && s[i] == '1'; ++i){
            p_sum += a[i];
            Rax = max(Rax, p_sum);
            fndR = true;
        }
        ll njr ;
        if(fndR) njr = Rax;
        else njr = 0;
        ll nx;
        if(z >= 0 && njr >= 0){
            nx = k - z - njr;
        } else if(z >= 0 && njr <= 0){
            nx = k - z;
        } else if(z <= 0 && njr >= 0){
            nx = k - njr;
        } else {
            nx = k;
        }
        cout << "Yes" << nl;
        floop(i,0,n){
            if(s[i] == '0'){
                if(i == y) cout << nx;
                else cout << NEG;
            } else{
                cout << a[i];
            }
            if(i+1<n) cout << sp;
            else cout << nl;
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