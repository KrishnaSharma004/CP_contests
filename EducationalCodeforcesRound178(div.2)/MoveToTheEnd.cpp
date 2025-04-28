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
#define maxelem(x) *max_element(x.begin(),x.end())
#define minelem(x) *min_element(x.begin(),x.end())
void logic(){
    int n;
    cin >> n;
    vll a(n+1);
    floop(i,1,n+1){
        cin >> a[i];
    }
    vll pf_m(n+1,0);
    pf_m[1] = a[1];
    floop(i,2,n+1){
        pf_m[i] = max(pf_m[i-1],a[i]);
    }
    vll suf_s(n+1,0);
    floop(i,1,n+1){
        suf_s[i] = suf_s[i-1] + a[n-i+1];
    }
    vll answer(n+1);
    floop(i,1,n+1){
        ll b = suf_s[i];
        if(n-i >= 1) b = max(b,pf_m[n-i]+suf_s[i-1]);
        answer[i] = b;
    }
    floop(i,1,n+1){
        cout << answer[i];
        if(i==n) cout << nl ;
        else cout << sp;
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