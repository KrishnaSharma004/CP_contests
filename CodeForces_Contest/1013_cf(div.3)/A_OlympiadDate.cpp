// #include <iostream>
// #include <vector>
// #include <string>
// #include <unordered_map>
// using namespace std;
// const string Target= "01032025";

// void solve(){
//     int n;
//     cin >>n;
//     vector<int> a(n);
//     for(int i=0;i<n;++i){
//         cin >> a[i];
//     }

//     string d = "";
//     unordered_map<char,int> f;
//     for(char c: Target) f[c]++;

//     unordered_map<char,int> cnt;
//     for(int i=0;i<n;++i){
//         char c = '0' + d[i];
//         cnt[c]++;


//     bool check = true;
//     for(char cc : Target){
//         if(cnt[cc]<f[cc]){
//             check = false;
//             break;
//         }
//     }
//     if(check){
//         cout << (i+1) << endl;
//         return;
//     }
// }

//     cout << 0 << endl;
// }

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n+1);
        for(int i=1;i<=n;++i){
            cin >> a[i];
        }
        int j;
        bool check = false;
        int cnt_1 = 0,cnt_2=0,cnt_0=0,cnt_3=0,cnt_5=0;
        for(j=1;j<=n;++j){
            if(a[j] ==0) cnt_0++;
            if(a[j] ==1) cnt_1++;
            if(a[j] ==2) cnt_2++;
            if(a[j] ==3) cnt_3++;
            if(a[j] ==5) cnt_5++;

            if(cnt_0 >= 3 && cnt_1>=1 && cnt_2>=2 && cnt_3>=1 && cnt_5>=1){
                check = true;
                break;
            }
        }
        if(check) cout << j << endl;
        else cout << 0 << endl;
    }
    return 0;
     
}