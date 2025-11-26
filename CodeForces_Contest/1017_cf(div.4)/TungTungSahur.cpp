#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <map>
using namespace std;
#define ll long long 
#define vint vector<int>
#define vll vector<long long>
#define vchar vector<char>
#define vstr vector<string>
#define vbool vector<bool>
#define rr(x) x.begin(),x.end()
#define nl endl
#define str string
#define ch char
#define si set<int>
#define ulll unsigned long long 
#define floop(i,a,b) for(int i=a;i<b;++i)
#define sp " "
#define mii map<int,int>
#define fauto(i,x) for(auto i:x)
#define vvint vector<vector<int> >
#define sz(x) x.size()
struct gp{
    ch c;
    int count;
};
#define vgp vector<gp>

vgp comp(const str &s){
    vgp grps;
    int x=s.size();
    if(x == 0) return grps;

    ch cr = s[0];
    int cnt = 1;
    floop(i,1,x){
        if(s[i]==cr){
            cnt++;
        }else{
            grps.push_back({cr,cnt});
            cr = s[i];
            cnt = 1;
        }
    }
    grps.push_back({cr,cnt});
    return grps;
}
int main(){
    int t; 
    cin >> t;
    while(t--){
        str x,y;
        cin >> x >> y;
        if(sz(y) < sz(x) || sz(y) > 2*sz(x)){
            cout << "NO" << nl;
            continue;
        }
        vgp gpp=comp(x);
        vgp gss=comp(y);
        if(sz(gpp) != sz(gss)){
            cout << "NO" << nl;
            continue;
        }
        bool flag = true;
        floop(i,0,sz(gpp)){
            if(gpp[i].c != gss[i].c){
                flag = false;
                break;
            }
            if(gss[i].count < gpp[i].count || gss[i].count>2*gpp[i].count){
                flag = false;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") <<nl;
    }
    return 0;
}