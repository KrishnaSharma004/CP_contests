#include <iostream>
#include <vector>
#include <string>
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
#define sp " "

void solve(){
    int nN,kK;
    cin >> nN >> kK;
    str ss;
    cin >> ss;

    for(int j=nN-2;j>=0 && kK>0;--j){
        if(ss[j]=='0' && ss[j+1]=='1'){
            ss[j] = '1';
            kK--;
        }
    }

    int kitne = 0;
    for(int x=0;x<nN;++x){
        if(ss[x]=='1') kitne++;
    }

    cout << kitne << nl;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}