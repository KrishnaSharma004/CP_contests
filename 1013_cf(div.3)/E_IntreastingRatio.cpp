#include <iostream>
#include <vector>
using namespace std;
#define al(x) (x).begin(),(x).end()
#define fast() ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
void solve(){
    fast();
    int t;
    cin >> t;
    vector<int> n(t);
     int m = 2;
     for(int i=0;i<t;++i){
        cin >> n[i];
        m = max(m,n[i]);
     }

     vector<int> siv(m+1,1);
     siv[0]=siv[1]=0;
     vector<int> pm;
     for(int i=2;i<=m;++i){
        if(siv[i]){
        pm.push_back(i);
        for(long long j= 1LL*i*i;j<=m;j+=i)
            siv[j] = 0;
      }
     }
     for(int c:n){
        int answer = 0;
        for( int d: pm){
            if(d>c) break;
            answer += c/d; 
        }
        cout << answer << endl;
     }
}
int main(){
        solve();
    return 0;
}