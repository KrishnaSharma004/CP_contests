#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    int n,k,p;
    cin >>n>>k>>p;

    if(k<-n*p || k>n*p){
        cout << -1 << endl;
        return ;
    }
    if(k==0){
        cout << 0 << endl;
        return ;
    }
    int min_ops = (abs(k)+p-1)/p; 
    if(min_ops>n){
        cout << -1 << endl;
    }
    else{
        cout << min_ops << endl ;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}