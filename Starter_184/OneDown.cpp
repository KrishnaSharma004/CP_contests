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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        str s,t;
        cin >> s >> t;

        bool pos = 1;
        int ex_ones = 0;
        floop(i,0,n){
            if(t[i]=='1' && s[i] != '1'){
                pos = false;
                break;
            }
        }
        if(!pos){
            cout << "NO" << nl;
            continue;
        }
        int cs = count(rr(s),'1');
        int ct = count(rr(t),'1');
        int df = cs - ct ;
        if(df%2 != 0 || df<0){
            cout << "NO" << nl;
        }else{
            cout << "YES" << nl;
        }
    }
}
int main(){
    logic();
    return 0;
}

