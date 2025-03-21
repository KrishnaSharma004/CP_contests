#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int f1,p1,f2,p2;
	cin >> f1 >>p1 >>f2 >>p2;
	if(abs(f1-p1)<abs(f2-p2)){
	    cout << "First" << endl;
	}else if(abs(f1-p1)>abs(f2-p2)){
	    cout << "Second" << endl;
	}else{
	    cout << "both" << endl;
	}
	return 0;
}
