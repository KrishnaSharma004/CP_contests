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

inline int cp1(ll a){
    return __builtin_popcountll(a);
}
ll GCD(ll x,ll y){
    if(y==0) return x;
    return GCD(y,x%y);
}
void logic(){
    int n;
    cin >> n;
    vll a(n);
    floop(i,0,n){
        cin >> a[i];
    }
    ll gl = a[0];
    floop(i,1,n){
        gl = GCD(gl,a[i]);
    }
    int alEqual  =1;
    floop(i,0,n){
        if(a[i] != gl){
            alEqual = 0;
            break;
        }
    }
    if(alEqual){
        cout << "NO" << nl;
        return ;
    }
    cout << "YES" << nl;
    int us = 0;
    floop(i,0,n){
        if(!us && a[i] != gl){
            cout << "1" << sp;
            us = 1;
        }else{
            cout << "2" << sp ;
        }
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