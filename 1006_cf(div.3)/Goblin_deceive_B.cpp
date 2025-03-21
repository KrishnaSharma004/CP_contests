#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n; 
        string s;
        cin >>s ;

        int m=0,u=0;
        for(char c:s){
            if(c=='-') m++;
            else u++;
        }
        if(m<2 || u==0){
            cout << 0 << endl ;
        }
        else{
            cout<< (1LL*m*m/4)*u<<endl;
        }
    }
    return 0;
}