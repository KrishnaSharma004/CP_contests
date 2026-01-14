#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    
	    vector<int> ch_h(26,0);
	    for(int i=0;i<n;++i){
	        ch_h[s[i]-97]++;
	    }
	    for(int i=0;i<26;++i){
	        if(ch_h[i] > 2){
	            cout << "NO" <<'\n';
	            return;
	        }
	    }
	    cout << "YES" << '\n';
}
int main() {
	int t;
	cin >> t;
	while(t--){
	    solve();
	}
    return 0;
}