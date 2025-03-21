#include <iostream>
#include <string>

using namespace std;
int main(){
    int t ;
    cin >> t ;
    while(t--){
        string W ;
        cin >> W ;
        W = W.substr(0,W.size() - 2) + "i";
        cout << W << endl ;
        }
        return 0 ; 
}