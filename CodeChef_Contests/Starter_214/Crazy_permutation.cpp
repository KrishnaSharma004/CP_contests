#include <iostream>
#include <vector>
using namespace std;

int sgn(int x){ 
    return x>0 ? 1 : -1; 
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int N; cin >> N;
        vector<int> A(N), B(N);
        for(int i=0;i<N;++i) cin>>A[i];
        for(int i=0;i<N;++i) cin>>B[i];

        if(N==1){
            cout << "YES\n";
            continue;
        }
        bool ok = true;
        for(int i=0;i+1<N;++i){
            if(sgn(A[i] - A[i+1]) != sgn(B[i] - B[i+1])){
                ok = false; 
                break;
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
