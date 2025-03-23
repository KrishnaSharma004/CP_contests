#include <iostream>
#include <vector>
using namespace std;

bool fnstate(int n,int m,vector<string> &g){
    for(int i=0;i<n;++i){
        if(g[i][0] == '1'){
            for(int j=0;j<m;++j){
                if(g[i][j] =='0'){
                    bool prow = true;
                    bool pcol = true ;

                    for(int k=0;k<j;k++){
                        if(g[i][k]=='0'){
                            prow = false ;
                            break;
                        }
                    }
                    for(int k=0;k<i;k++){
                        if(g[k][j]=='0'){
                            pcol = false ;
                            break;
                        }
                    }

                    if(!prow && !pcol){
                        return false ;
                    }
                }
            }
        }
    }
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector <string> g(n);
        for(int i=0;i<n;++i){
            cin >> g[i];
        }
        if(fnstate(n,m,g)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
} 