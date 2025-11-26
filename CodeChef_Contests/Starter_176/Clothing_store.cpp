#include <iostream>
#include <cmath>
using namespace std;

void solve(){
    int x,y,z,a,b,c;
    cin>>x>>y>>z>>a>>b>>c;
    int happy =0;
    //serve pepole who want S directly 
    int serve = min(x,a);
    happy +=serve;
    x-=serve;
    a-=serve;
    
    //serve pepole who want L directly 
    serve = min(y,b);
    happy +=serve;
    y-=serve;
    b-=serve;
    
    //serve people who want XL directly 
    serve = min(z,c);
    happy +=serve;
    z-=serve;
    c-=serve;
    
    //convert XL to L if needed
    serve = min(z,b);
    happy+=serve;
    z-=serve;
    b-=serve;
    
    //convert XL to S if needed
    serve = min(z,a);
    happy+=serve;
    z-=serve;
    a-=serve;
    
    //convert L to S if needed
    serve = min(y,a);
    happy += serve;
    y-=serve;
    a-=serve;
    
    cout << happy << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    solve();
	}
	return 0;
}
