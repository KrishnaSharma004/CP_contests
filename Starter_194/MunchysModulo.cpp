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
using namespace std;
#define ll long long 
#define vint vector<int>
#define vll vector<long long>
#define vchar vector<char>
#define vstr vector<string>
#define vtiii vector<tuple<int,int,int> >
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

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vll a(n);
        floop(i,0,n) cin >> a[i];
        vll sorted = a;
        sort(rr(sorted));
        ll max1 = sorted[n-1];
        ll max2 = sorted[n-2];
        ll max3 = sorted[n-3];
        ll result = 0;
        floop(i,0,n){
            if(a[i]==max1) continue;
            if(max2+max3>a[i]) result = max(result,a[i]);
            else result = max(result,a[i]%(max2+max3));
        }
        vint idx;
        floop(i,0,n){
            if(a[i]==max1) idx.pb(i);
        }
        for(int i:idx){
            floop(j,0,n){
                if(j==i) continue;
                floop(k,j+1,n){
                    if(k==i) continue;
                    ll sum = a[j]+a[k];
                    if(sum==0)continue;
                    result = max(result,a[i]%sum);
                }
            }
        }
        cout << result << nl;
    }
    return 0;
} 