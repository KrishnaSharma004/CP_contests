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
    int n,k;
    cin >> n >> k;
    int s = n-k+1;
    vint sm(n);
    floop(i,1,s+1){
        sm[i-1] = s+1-i;
    }
    floop(i,s+1,n+1){
        sm[i-1] = i;
    }
    floop(i,0,n){
        cout << sm[i] << sp;
    }
    cout << nl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
   
    return 0;
}