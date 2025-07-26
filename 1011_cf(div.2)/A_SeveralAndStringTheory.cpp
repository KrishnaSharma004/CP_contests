#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool univ(const string &s){
    int r = s.size();
    for(int i = 0; i < r / 2; ++i){
        if(s[i] != s[r - 1 - i])
            return s[i] < s[r - 1 - i];
    }
    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        if(n == 1){
            cout << "NO" << endl;
            continue;
        }

        bool same = true;
        for(int i = 1; i < n; ++i){
            if(s[i] != s[0]){
                same = false;
                break;
            }
        }

        if(same){
            cout << "NO" << endl;
            continue;
        }

        if(univ(s)){
            cout << "YES" << endl;
            continue;
        }

        cout << (k >= 1 ? "YES" : "NO") << endl;
    }
    return 0;
}

// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// bool univ(const string &s){
//     int r = s.size();
//     for(int i=0;i<r/2;++i){
//         if(s[i]!=s[r-1-i])
//             return s[i]<s[r-1-i];
//     }
//     return false ;
// }
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while(t--){
//         int n,k;
//         cin >> n >> k;
//         string s;
//         cin >> s;
//         if(n==1){
//             cout << "NO" << endl;
//             continue;
//         }
//         bool same = true ;
//         for(int i=1;i<n;++i){
//             if(s[i]!=s[0]){
//                 same = false ;
//                 break;
//         }
//         if(same){
//             cout << "NO" << endl;
//             continue;
//         }
//         if(univ(s)){
//             cout << "YES" << endl;
//             continue;
//         }
//         cout << (k>=1 ? "YES" : "NO") << endl;

//     }
// }
//     return 0;
// }