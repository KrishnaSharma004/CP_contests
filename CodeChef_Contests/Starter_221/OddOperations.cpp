#include <iostream>
using namespace std;

int maxdgt(int n){
    int m_d = -1;
    while(n>0){
        int lst_dgt = n%10;
        m_d = max(m_d,lst_dgt);
        
        n /= 10;
    }
    return m_d;
}
bool findOdd(int n){
    while(n>0){
        int lst_dgt = n%10;
        if(lst_dgt&1) return true;
        n /= 10;
    }
    return false;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        int count = 0;
        if(n%2 == 0){
            bool odd_no = findOdd(n);
            if(odd_no){
                cout << 1 << '\n';
            }
            else{
                while(n%2 == 0){
                    n = n - maxdgt(n);
                    count++;
                    if(findOdd(n)){
                        cout << ++count << '\n';
                        break;
                    }
                    if(n == 0){
                        cout << -1 << '\n';
                        break;
                    }
                }
            }
        }
        else cout << count << '\n';
    }
    return 0;
}