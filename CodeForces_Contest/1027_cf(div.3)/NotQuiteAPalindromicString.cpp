#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <map>
#include <cstring>
#include <unordered_map>
#include <deque>
using namespace std;
#define ll long long 
#define vint vector<int>
#define vll vector<long long>
#define vchar vector<char>
#define vstr vector<string>
#define rr(x) x.begin(),x.end()
#define nl endl
#define str string
#define si set<int>
#define pb(x) push_back(x)
#define ull unsigned long long 
#define floop(i,a,b) for(int i=a;i<b;++i)
#define sp " "
#define mii map<int,int>
#define fauto(i,x) for(auto i:x)
#define vpint vector<pair<int,int> >
#define umpint unordered_map<int,int>
#define vvint vector<vector<int> > 
#define vpib vector<pair<int,bool> >
#define maxelem(x) *max_element(x.begin(),x.end())
#define minelem(x) *min_element(x.begin(),x.end())

void logic(){
    int n,k;
    cin >> n >> k;
    str s;
    cin >> s;

    int cnt0 = 0;
    for(char ch : s){
        if(ch == '0'){
            cnt0++;
        }
    }
    int cnt1 = n-cnt0;
    int no_total_pr = n/2;
    int no_bad_pr_nded = no_total_pr - k;
    if(cnt0 < no_bad_pr_nded || cnt1 < no_bad_pr_nded){
        cout << "NO" << nl;
        return ;
    }
    int rm_zero_good = cnt0 - no_bad_pr_nded;
    int rm_ones_good = cnt1 - no_bad_pr_nded;

    int psb_good_pr_ones = rm_ones_good/2;
    int psb_good_pr_zeros = rm_zero_good/2;

    int total_mx_good_pr_form = psb_good_pr_ones + psb_good_pr_zeros;

    if(total_mx_good_pr_form >= k){
        cout << "YES" << nl;
    }else{
        cout << "NO" << nl;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}