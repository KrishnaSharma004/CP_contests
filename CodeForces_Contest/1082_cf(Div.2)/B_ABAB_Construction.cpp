#include <bits/stdc++.h>

using namespace std; 
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()

void solve(){
    int n;
    cin >> n;
    string str;
    cin >> str;

    vector<char> t;
    for(int i = 0 ; i < n ; ++i){
        if((i + 1)& 1) t.push_back('a');
        else t.push_back('b');
    } 

    int i = 0; 
    int j = n - 1;
    int k = 0;
    while(j - i >= 0 && k < n){
        if(str[k] == '?'){
            if(k < n - 1 && str[k + 1] == '?'){
                i++;
            }
            else{
                if(str[k + 1] == t[i]){
                    j--;
                }else{
                    i++;
                }
            }
        }else{
            if(str[k] == t[j]){
                j--;
            }
            else if(str[k] == t[i]){
                i++;
            }
            else{
                cout << "NO\n";
                return;
            }
        }
        k++;
    }
    cout << "YES\n";
}


int32_t main(){
	std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}