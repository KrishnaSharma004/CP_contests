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
    int x= round(n/3.0)*3;
    cout << x << nl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}
