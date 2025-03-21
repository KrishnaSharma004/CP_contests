#include <bits/stdc++.h>
using namespace std ;

unsigned int f(unsigned int m){
    if(m==0)return 0;
    if(m==1)return 0;
    unsigned in mm = m-1;
    int p=31-__builtin_clz(mm);
    if(m==(1u<<p)){
        return (1u<<p)-1;
    }else{
        return (1u<<(p+1))-1;
    }
}
    
    void solve(){
        int n;
        unsigned int x;
        cin >> n >> x;

        int best_m =0;
        for(int m=0;m<=n;++m){
            if (m==0){
                best_m =0;
            }else{
                unsigned int base =f(m);
                if((base &(~x))!=0) continue;

                int needed;
                if(base==x){
                    needed =m;
                }else{
                    needed = m+1;
                }

                if(needed <=n){
                    best_m =m;
                }
            }
        }
    vector <unsigned int> distinct;
    if(best_m==0){
        distinct.push_back(x);
    }else{
        for(int i=0;i<best_m;++i){
            distinct.push_back(i);
        }
        unsigned int base = f(best_m);
        if(best != x){
            unsigned int extra =x&(~base);
            distinct.push_back(extra);
        }
    }
    int d=distinct.size();
    vector<unsigned int>ans;
    for(auto num :distinct ) ans.push_back(num);

    unsigned int filler = (best_m > 0 ? 0u :x);
    while(ans.size()<(size_t)n){
        ans.push_back(filler);
    }
    for(auto num :ans)
    cout << num << " ";
    cout << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >>t;
    while(t--){
        solve();
    }
    return 0;
}