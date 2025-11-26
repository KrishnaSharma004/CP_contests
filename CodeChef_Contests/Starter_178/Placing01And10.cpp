#include <iostream>
using namespace std;

void solution(){
    int a,b;
    cin >> a>>b;
    if(abs(a-b)<=1){
        cout << a+b << endl ;
    }else{
        cout << 2*max(a,b)-1 <<endl;
    }
}

int main() {
	// your code goes here
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t;
	cin >> t;
	while(t--){
	    solution();
	}
	return 0;
}
