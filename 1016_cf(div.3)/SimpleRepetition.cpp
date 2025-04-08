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
#define dl double long
#define rr(x) x.begin(),x.end()
#define nl endl
#define str string
#define si set<int>
#define pb(x) push_back(x)
#define pint pair<int,int>
#define ull unsigned long long 
#define floop(i,x,a,b) for(int i=a;x<=b;++i)
#define sp " "
#define mint map<int,int>
#define fauto(i,x) for(auto i:x)

bool X(int n){
    if(n<2) return false;
    floop(i,i*i,2,n){
        if(n%i==0) return false;
    }
    return true;
}

void logic(){
    ll x,k;
    cin >> x >> k;
    cout << (k==1 ? (X(x)) ? "YES" : "NO":((x==1 && k==2) ? "YES" : "NO")) << nl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}