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
#define vstr vector<string>
#define vbool vector<bool>
#define rr(x) x.begin(),x.end()
#define nl endl
#define str string
#define si set<int>
#define pb(x) push_back(x)
#define ulll unsigned long long 
#define floop(i,a,b) for(int i=a;i<b;++i)
#define sp " "
#define mii map<int,int>
#define fauto(i,x) for(auto i:x)
#define vvint vector<vector<int> >

void logic(){
    ll n;
    cin >> n;
    vvint a(n,vint(n));
    floop(i,0,n){
        floop(x,0,n){
            cin >> a[i][x];
        }
    }
    vint b(2*n+1,0);
    floop(i,0,n){
        floop(x,0,n){
            int y=i+x+2;
            if(!b[y]) b[y] = a[i][x];
        }
    }
    vbool u(2*n+1,false);
    floop(i,2,2*n+1){
        u[b[i]]= true;
    }
    int m = 0;
    floop(i,1,2*n+1){
        if(!u[i]){
            m = i;
            break;
        }
    }
    b[1] = m;
    floop(i,1,2*n+1){
        cout << b[i] << sp;
    }
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}