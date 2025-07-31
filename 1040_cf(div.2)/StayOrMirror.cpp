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
struct BIT{
    int n;
    vint f;
    BIT(int _n=0): n(_n),f(n+1,0){ }
    void init(int _n){
        n=_n;
        f.assign(n+1,0);
    }
    void upd(int i){
        for(;i<=n;i+=i&-i) f[i]++;
    }
    int query(int i){
        int s=0;
        for(;i>0;i-=i&-i) s+=f[i];
        return s;
    }
};
void logic(){
    int n;
    cin >> n;
    
    vint p(n+1);
    floop(i,1,n+1) cin >> p[i];
    vint invr(n+1),gl(n+1);
    BIT bit(n);
    int invp=0;
    bit.init(n);
    for(int i=n;i>=1;i--){
        invr[i]=bit.query(p[i]-1);
        invp+=invr[i];
        bit.upd(p[i]);
    }
    bit.init(n);
    floop(i,1,n+1){
        gl[i]=(i-1)-bit.query(p[i]);
        bit.upd(p[i]);
    }
    ll sum_neg = 0;
    floop(i,1,n+1){
        ll d=(n-i)-invr[i]-gl[i];
        if(d<0) sum_neg+=d;
    }
    ll ans = invp+sum_neg;
    cout << ans << nl;
} 
int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}