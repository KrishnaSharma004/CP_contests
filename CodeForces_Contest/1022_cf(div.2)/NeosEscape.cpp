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

void logic(){
    int n;
    cin >> n;
    vll x(n);
    floop(i,0,n){
        cin >> x[i];
    }
    int answer=0;
    for(int s=0;s<n; ){
        int j=s;
        while(j+1<n && x[j+1]==x[s]){
            ++j;
        }
        ll y = x[s];
        bool lf_ok = (s==0) || (x[s-1]<y);
        bool rt_ok = (j==n-1) || (x[j+1] < y);
        if(lf_ok && rt_ok){
            ++answer;
        }
        s=j+1;
    }
    cout << answer << nl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}