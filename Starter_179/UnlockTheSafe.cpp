#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,k;
        cin >> n >> k;
        vector <int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;++i){
            cin >> a[i];
        }
        for(int i=0;i<n;++i){
            cin >> b[i];
        }
        
        long long bs=0;
        
        int mp = INT_MAX;
        for(int i=0;i<n;++i){
            int x=a[i];
            int y=b[i];
            int xx=x-1;
            int yy=y-1;
            
            int d=(yy-xx+9)%9;
            
            int g,dl;
            if(d==0){
                g=0;
                dl=9;
            }else{
                int u=d;
                int dwn = 9-d;
                if(u<=dwn){
                    g=u;
                    dl = dwn-u;
                }else{
                    g=dwn;
                    dl=u-dwn;
                }
            }
            bs += g;
            if(dl < mp) mp = dl;
        }
        long long A = k-bs;
        if(A <0){
            cout << "NO" << endl;
            continue;
        }
        if(A%2==0){
            cout << "YES" << endl;
        }else{
            if(mp <= A){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }
	return 0;

}