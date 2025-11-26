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
#include <iomanip>
#include <cstdint>
using namespace std;
#define ll long long 
#define pint pair<int,int>
#define vint vector<int>
#define vll vector<long long>
#define vchar vector<char>
#define vstr vector<string>
#define vbool vector<bool>
#define vtiii vector<tuple<int,int,int> >
#define as(x) x.begin(),x.end()
#define ds(y) y.rbegin(),y.rend()
#define nl endl
#define str string
#define si set<int>
#define ull unsigned long long 
#define floop(i,a,b) for(int i=a;i<b;i+=2)
#define sp " "
#define mint map<int,int>
#define mll map<ll,ll>
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
bool check(ll mid,vll &hg,ll x){
    ll units=0;
    int n=hg.size();
    floop(i,0,n){
        if(hg[i]<mid){
            units += (mid-hg[i]);
        }
    }
    return units<=x;
}
vint FindMax(vint &arr){
    vpint tmp(arr.size());

    floop(i,0,tmp.size()){
        tmp[i].first=arr[i];
        tmp[i].second=i;
    }
    sort(ds(tmp));
    vint ans(3);
    floop(i,0,3) ans[i]=tmp[i].second;
    return ans;
}
ll lcm(ll num1,ll num2){
    return (num1*num2)/(gcd(num1,num2));
}
ll calculatesum(ll start,ll end){
    ll sum = ((start +end)*(end-start +1))/2;

    return sum;
}
const ll mod = 1e9+7;
bool pf(ll val,int ind,int x,int mid){
    if(val + (1LL * (ind + 1)*(mid-1))<=x)
        return true;
    return false;
}
int binsearch(ll val,int ind,int x){
    int low = 1,high=1e9+5;
    int ans = 0;

    while(low<=high){
        int mid = (low + high)/2;
        if(pf(val,ind,x,mid)){
            ans=mid;
            low=mid+1;
        }else{
            high = mid -1;
        }
    }
    return ans ;
}
int binarysearch(vll &pmax,int n,int val){
    int low = 0,high=n-1;
    int ans = -1;

    while(low<=high){
        int mid = (low + high)/2;
        if(pmax[mid]<=val){
            ans=mid;
            low=mid+1;
        }else{
            high = mid -1;
        }
    }
    return ans ;
}
ll modl = 998244353;
int ans=0;
int dfs(int node,vvint &adj,str &s){
    if(adj[node].size()==0){
        return s[node-1]=='W'?1:-1;
    }
    int cnt = 0;
    for(auto child:adj[node]){
        cnt +=dfs(child,adj,s);
    }
    cnt += (s[node-1]=='W'?1:-1);
    if(cnt==0) ans++;

    return cnt;
}
ll calculateSumOfFirstX(int x){
    return x*1ll*(x+1)/2;
}
ll ceil_division(ll a,ll b){
    return (a+b-1)/b;
}
int segmentStart[200000], segmentEnd[200000];

bool isReachableWithJump(int segmentCount, int maxJump)
{
    int currentMinPosition = 0;
    int currentMaxPosition = 0;

    for (int i = 0; i < segmentCount; i++)
    {
        currentMaxPosition += maxJump;
        currentMinPosition -= maxJump;

        int reachableStart = max(currentMinPosition, segmentStart[i]);
        int reachableEnd = min(currentMaxPosition, segmentEnd[i]);

        if (reachableStart > reachableEnd)
        {
            return false;
        }

        currentMinPosition = reachableStart;
        currentMaxPosition = reachableEnd;
    }

    return true;
}
template <typename T>
istream& operator>> (istream& in, vector<T>& a){
  for (T& x : a) in >> x;
  return in;
}
inline void flush() { cout << '\n'; cout.flush(); }

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;

ll query(int x, const vi& s) {
    cout << "? " << x << " " << s.size() << " ";
    for (int v : s) cout << v << " ";
    flush();
    ll res;
    if (!(cin >> res) || res == -1) exit(0);
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vi all(n);
        iota(all.begin(), all.end(), 1);

        vi len(n + 1, 1);
        for (int i = 1; i <= n; ++i)
            len[i] = query(i, all);

        int root = 1, maxLen = len[1];
        for (int i = 2; i <= n; ++i)
            if (len[i] > maxLen) maxLen = len[i], root = i;

        vvi lvl(maxLen + 1);
        for (int i = 1; i <= n; ++i)
            if (len[i] >= 1 && len[i] <= maxLen)
                lvl[len[i]].push_back(i);

        vi path;
        path.reserve(maxLen);
        vector<char> vis(n + 1, 0);
        int cur = root;
        path.push_back(cur);
        vis[cur] = 1;

        for (int need = maxLen - 1; need >= 1; --need) {
            int nxt = -1;
            for (int v : lvl[need]) {
                if (vis[v]) continue;
                if (query(cur, {cur, v}) == 2) {
                    nxt = v;
                    break;
                }
            }
            if (nxt == -1) {
                cout << "! 1 " << root << " ";
                flush();
                continue;
            }
            path.push_back(nxt);
            vis[nxt] = 1;
            cur = nxt;
        }

        cout << "! " << path.size() << " ";
        for (int v : path) cout << v << " ";
        flush();
    }
    return 0;
}