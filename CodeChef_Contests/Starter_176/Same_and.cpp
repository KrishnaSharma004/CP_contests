#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t;
	cin >> t;
	while(t--){
	    unsigned long long n,m;
	    cin >>n >>m;
	    vector<unsigned long long> seq;
	    seq.push_back(n);
	    for(int i=0;i<63;++i){
	        if((n>>i)&1ULL) continue;
	        unsigned long long candidate = n+(1ULL<<i);
	        if(candidate<=m){
	        seq.push_back(candidate);
	        }
	    }
	    if(seq.size()<2) cout <<-1<<endl;
	    else{
	        cout << seq.size()<<endl;
	        for(auto x:seq) 
	        cout <<x<<" ";
	        cout <<endl;
	    }
	}
	return 0;

}
