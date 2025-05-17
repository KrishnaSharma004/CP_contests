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

void logic(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        vint a(n+1);
        floop(i,1,n+1){
            cin >> a[i];
        }
        vvint mp(n);
        vpib unt;
        floop(i,1,n+1){
            if(a[i]==0){
                if(i>1) unt.emplace_back(i-1,true);
                if(i<n) unt.emplace_back(i,false);
            }else{
                if(i==1){
                    unt.emplace_back(1,true);
                }else if(i==n){
                    unt.emplace_back(n-1,false);
                }else{
                    mp[i-1].pb(i);
                }
            }
        }
        vint asgn(n,-1);
        deque<pair<int, bool> > ddq;
        for(auto &i:unt) ddq.pb(i);
        bool bd = 0;
        while(!ddq.empty() && !bd){
            auto x = ddq.front();
            ddq.pop_front();
            int y = x.first;
            bool vl = x.second;
            if(asgn[y] != -1){
                if(asgn[y] != (vl ? 1 : 0)){
                    bd = 1;
                }
                continue;
            }
            if(vl) asgn[y]=1;
            else asgn[y]=0;
            if(vl){
                for(int i : mp[y]){
                    ddq.emplace_back(i,1);
                }
            }
        }
        if(bd) cout << "YES" << nl;
        else cout << "NO" << nl;
    }
}
int main(){
    logic();
    return 0;
}