#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,k;
	    cin >>n>>k;
	    int p[105]={0};
	    int flag = 1;
	    for(int i=0;i<k;++i){
	        int ind[110];
	        int cnt = 0;
	        for(int j=1;j<=n;++j){
	            if(j%k==i){
	                ind[cnt++]=j;
	            }
	        }
	        if(cnt==1){
	            flag=0;
	            break;
	        }
	        for(int r=0;r<cnt;++r){
	            int pos = ind[r];
	            int val = ind[(r+1)%cnt];
	            p[pos] = val;
	        }
	    }
	    if(!flag){
	        cout << -1 << endl;
	        }else{
	            for(int i=1;i<=n;++i){
	                cout << p[i] << " " ;
	            }
	            cout << endl;
	        }
	}
	return 0;

}
