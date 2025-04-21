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
#define vbool vector<bool>
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

void logic(){
    int n;
    cin >> n;
    str s;
    cin >> s;
    int x=0;
    int c1=0;
    int c2=0;
    char prv = '0';
    floop(i,0,n){
        char cur = s[i];
        if(cur != prv){
            x++;
            if(prv == '0') c1++;
            else c2++;
        }
        prv = cur;
    }
    int best_g ;
    if(c1 >= 2 || c2 >= 2) best_g=2;
    else if(x>=2) best_g=1;
    else best_g = 0;

    int xprime = x - best_g;
    cout << n+xprime << nl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}