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
static const int IF = 0x3f3f3f3f;
void logic(){
    int n;
    cin >> n;
    vint a(n+1),next(n+2),last(n+2);
    floop(i,1,n+1) cin >> a[i];

    int x=n+1;
    floop(i,1,n+1) last[i] = IF;
    for(int i=n;i>=1;i--){
        next[i] = last[a[i]];
        last[a[i]] = i;
    }
    int ps = 1,count=0;
    while(ps<=n){
        int ending=ps;
        while(true){
            int N = 0;
            floop(i,ps,ending+1){
                N=max(N,next[i]);
            }
            count++;
            if(N>n) break;
            ps = ending +1;
            ending = N;
        }
        break;
    }
    cout << count << nl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}