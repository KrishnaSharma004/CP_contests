//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <map>
#include <cstring>
#include <unordered_map>
#include <deque>
#include <numeric>
#include <algorithm>
#include <set>
#include <queue>
using namespace std;

#define ll long long 
#define vint vector<int>
#define vll vector<long long>
#define vchar vector<char>
#define vstr vector<string>
#define vtiii vector<tuple<int,int,int> >
#define as(x) x.begin(),x.end()
#define ds(y) y.rbegin(),y.rend()
#define nl endl
#define str string
#define si set<int>
#define ull unsigned long long 
#define floop(i,a,b) for(int i=a;i<b;++i)
#define sp " "
#define mii map<int,int>
#define fauto(i,x) for(auto &i:x)
#define vpint vector<pair<int,int> >
#define vpll vector<pair<ll,ll> >
#define umpint unordered_map<int,int>
#define vvint vector<vector<int> > 
#define vvll vector<vector<ll> > 
#define vpib vector<pair<int,bool> >
#define maxelem(x) *max_element(x.begin(),x.end())
#define minelem(x) *min_element(x.begin(),x.end())
#define MOD (ll)(1e9+7)
bool even(int n){
    if(n%2==0) return true;
    return false;
}
void generateSequence(int n) {
    vint result;

    if (!even(n)) {
        floop(i, 0, n) {
            result.push_back((i % 2 == 0) ? -1 : 3);
        }
    } else {
        if (n == 2) {
            result = {-1, 2};
        } else {
            floop(i, 0, n - 2) {
                result.push_back((i % 2 == 0) ? -1 : 3);
            }
            result.push_back(-1);
            result.push_back(2);
        }
    }

    fauto(val, result) cout << val << sp;
    cout << nl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        generateSequence(n);
    }
    return 0;
}
