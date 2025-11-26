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

void logic(){
    int n;
    str s;
    cin >> n >> s;
    vint freq(26,0);
    for(char c: s) freq[c-'a']++;

    bool okay = false;
    floop(i,1,n-1){
        if(freq[s[i]-'a'] >= 2){
            okay = true;
            break;
        }
    }
    if(okay) cout << "YES" <<nl;
    else cout << "NO" <<nl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
}