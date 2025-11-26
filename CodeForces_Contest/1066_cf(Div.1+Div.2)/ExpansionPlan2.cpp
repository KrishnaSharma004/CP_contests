#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int n,x,y; cin >> n >> x >> y;
    string s; cin >> s;
    x=abs(x);y=abs(y);
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='8'){
            x=max(0,x-1);
            y=max(0,y-1);
        }
        else{
            if(x>=y){
                x=max(0,x-1);
            }else{
                y=max(0,y-1);
            }
        }
    }
    if(x==0&&y==0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}