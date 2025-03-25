#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,m;
        cin >> n >> m;
        int a[n][m];
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                char ch;
                cin >> ch;
                int y = ch -'0';
                a[i][j] = y;
            }
        }
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                if(a[i][j]==1){
                    bool check = false ;
                    for(int k=0;k<i;++k){
                        if(a[k][j]==0) check = true;
                    }
                    if(!check) continue;
                    check = false;
                    for(int k=0;k<j;++k){
                        if(a[i][k]==0) check = true;
                    }
                    if(check){
                        cout << "NO" << endl;
                        return 0;
                    }
                }
                
            }
        }
        cout << "YES" << endl;
    }
    return 0;
}