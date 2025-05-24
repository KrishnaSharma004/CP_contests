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

int min_rm(vint &x){
    sort(rr(x));
    int a = x.size();

    int y_e = a,z_e = -1;
    int y_o = a,z_o = -1;
    floop(i,0,a){
        if(x[i]%2==0){
            y_e = min(y_e,i);
            z_e = max(z_e,i);
        }else{
            y_o = min(y_o,i);
            z_o = max(z_o,i);
        }
    }
    int evlen = (y_e <= z_e) ? (z_e - y_e+1) : 0;
    int oddlen = (y_o <= z_o) ? (z_o-y_o+1):0;
    return a-max(evlen,oddlen);
}
void logic(){
    str s;
    cin >> s;
    int blnc = 0;
    bool brk = 0;
    int x = (int)s.size();
    floop(i,0,x-1){
        if(s[i]== '(') blnc++;
        else blnc--;
        if(blnc == 0){
            brk = true;
            break;
        }
    }
    if(brk) cout << "YES" << nl;
    else cout << "NO" << nl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}