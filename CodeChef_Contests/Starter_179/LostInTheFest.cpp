#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector <int> a(n);
	    for(int i=0;i<n;++i){
	        cin >> a[i];
	    }
	    
	    int q = a[n-1];
	    int cnt = 0;
	    for(int i=0;i<n-1;++i){
	        if(a[i]<q){
	            cnt++;
	        }
	        else break;
	    }
	    int s = n - (cnt +1);
	    cout << s << endl;
	}
    return 0;
}