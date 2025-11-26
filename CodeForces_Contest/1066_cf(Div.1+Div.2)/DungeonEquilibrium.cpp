#include <iostream>
#include <vector>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> v(n);
		for(int i=0;i<n;++i){
			cin >> v[i];
		}
		vector<int> v_cnt(n+1,0);
		for(int i=0;i<n;++i){
			v_cnt[v[i]]++;
		}
		int total_op = 0;
		for(int i=0;i<=n;++i){
			if(v_cnt[i]>=i){
				total_op += (v_cnt[i]-i);
			}
			else{
				total_op += v_cnt[i];
			}
		}
		cout << total_op << endl;
	}
	return 0;
}