#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int l,w,r,g,b;
        cin >> l >> w >> r >> g >> b;

        int lens[4] = {l,w,l,w};
        int col[3] = {r,g,b};

        int ans = 6;

        for(int i=0;i < 3;++i)
            for(int j=0;j<3;++j){
                if(j == i) continue;
                for(int k = 0;k<3;++k){
                    if(k == i || k == j) continue;

                    for(int a1=0;a1<4;++a1){
                        for(int a2=0;a2<4;++a2){
                            if(a2 == a1) continue;
                            for(int c=0;c<4;++c){
                                if(c == a1 || c == a2) continue;
                                for(int d=0;d<4;d++){
                                    if(d == a1 || d == a2 || d == c) continue;

                                    if(lens[a1]+lens[a2] == col[i] && lens[c] == col[j] && lens[d] == col[k]){

                                        ans = 4;
                                
                                    }
                                }
                            }
                        }
                    }
                }
            }
        for(int mask = 1;mask < (1 << 4);mask++){
            int sum = 0;
            for(int i=0;i<4;++i){
                if(mask & (1<<i)) sum += lens[i];
            }
            if(sum == r || sum == g || sum == b) ans = min(ans,5);
        }
        cout << ans << '\n';
    }
    return 0;
}