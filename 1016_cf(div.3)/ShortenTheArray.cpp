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
#define ull unsigned long long 
#define floop(i,a,b) for(int i=a;i<b;++i)
#define sp " "
#define mii map<int,int>
#define fauto(i,x) for(auto i:x)

void logic(){
    ll n,k;
    cin >> n >> k;
    vint a(n);
    floop(i,0,n){
        cin >> a[i];
    }
    if(k==0){
        cout << "1" << nl;
        return ;
    }
    int answer = INT_MAX;
    floop(i,0,n){
        int abhijomax = 0;
        for(int y=i+1;y<n && y<i+65;++y){
            floop(x,i,y){
                int h = a[x]^a[y];
                abhijomax = max(abhijomax,h);
            }
            if(abhijomax >= k){
                int g = y-i+1;
                answer = min(answer,g);
                break;
            }
        }
    }
    if(answer==INT_MAX) cout << "-1" << nl;
    else cout << answer << nl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}