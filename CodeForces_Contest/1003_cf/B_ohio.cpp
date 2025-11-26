#include <iostream>
#include <string>

using namespace std ;
int ohio( string s ){
    for(int i=0 ; i<s.size()-1 ; ++i){
        if(s[i] == s[i+1]){
            return 1 ;
        }

    }
    return s.size();
}
int main(){
    int t ;
    cin >> t ;
    while(t--){
        string s ;
        cin >> s ;
        cout << ohio(s) << endl ;
    }
    return 0 ; 
}
