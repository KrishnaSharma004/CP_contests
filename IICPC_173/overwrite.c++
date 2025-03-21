#include<bits/stdc++.h>
using namespace std ;

vector<int> solve(int n,int m,vector<int>& a,vector<int>& b ){
    int minpos = min_element(b.begin(),b.end())- b.begin();

    vector<int> best = a ;
    for(int i=0;i<n-m;++i){
        bool improve = false;

        for(int j=0 ; j<m; ++j){
            if(best[i+j]<b[(j+minpos)%m])
            break ;
            if(best[i+j]>b[(j+minpos)%m]){
            improve = true ;
            break ;
            }
        }
        if(improve){
            for(int j=0 ; j<m ; ++j){
                best[i+j] = b[(j+minpos)%m];
            }
        }
    }
    return base ;
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t ;
    while(t--){
        int n,m;
        cin >> n >> m ;
        vector<int> a(n),b(m);
        for(int i=0 ; i<n ; ++i) cin >> a[i];
        for(int i=0 ; i<m ; ++i) cin >> b[i];

        vector<int> res = solve(n,m,a,b);
        for(int i=0 ; i<n ; ++i ){
            cout << res[i] << (i==n-1 ?"\n" : " ");
            }
    }
    return 0;
}