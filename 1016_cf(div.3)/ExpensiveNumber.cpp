#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <map>
using namespace std;
#define ll long long 
#define vint vector<int>
#define vll vector<long long>
#define vchar vector<char>
#define rr(x) x.begin(),x.end()
#define nl endl
#define str string
#define si set<int>
#define pb(x) push_back(x)
#define pint pair<int,int>
#define ull unsigned long long 
#define floop(i,a,b) for(int i=a;i<b;++i)
#define sp " "
#define mii map<int,int>
#define fauto(i,x) for(auto i:x)

void logic(){
    str s;
    cin >> s;
    ll x=0;
    ll count = 0;
    fauto(i,s){
        if(i== '0'){
            count++;
        }else{
            x=max(x,count+1);
        }
    }
    int ans = s.size() - x;
    cout << ans << nl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}