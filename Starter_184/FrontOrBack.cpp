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
const int mod = 998244353;
void logic(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vint frq(n,0);
        floop(i,0,n){
            int x;
            cin >> x;
            if(x>= 0 && x<n) frq[x]++;
            else frq[0] = n+1;
        }
        bool flag = 1;
        int answer = 1;
        floop(i,0,n-1-i){
            int x = n-1-i;
            int ff = frq[i]+frq[x];
            if(ff>2){
                flag = false;
                break;
            }
            if(ff >= 1) answer = answer * 2 % mod;
        }
        if(!flag){
            cout << 0 << nl;
            continue;
        }
        if(n%2==1){
            int x = (n-1)/2;
            if(frq[x]>1){
                answer = 0;
            }
        }
        cout << answer << nl;
    }
}
int main(){
    logic();
    return 0;
}

