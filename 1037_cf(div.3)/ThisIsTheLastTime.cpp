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
template<typename T>
void printa(const vector<T> a){
    fauto(p,a) cout << p << sp;
    cout << nl;
}
template<typename T>
istream& operator>>(istream&in,vector<T> &v){
    fauto(e,v) cin >> e ;
    return in;
}
template<typename T1,typename T2>
istream& operator>>(istream&in,pair<T1,T2> &p){
    cin >> p.first >> p.second;
    return in;
}
template<typename T>
void print2d(const vector<vector<T>> &vv){
    fauto(r,vv){
        fauto(i,r) cout << i << " ";
        cout << nl;
    }
}
void logic(){
    ll n,k;
    cin >> n >> k;
    struct Casino { ll l,r,x;};
    vector<Casino> a(n);
    floop(i,0,n){
        cin >> a[i].l >> a[i].r >> a[i].x;
    }
    sort(as(a),[](const Casino&A,const Casino &B){return A.l < B.l;});
    ll cur = k;
    int idx=0;
    priority_queue<ll> pq;
    while(true){
        while(idx < n && a[idx].l <= cur){
            pq.push(a[idx].x);
            idx++;
        }
        while(!pq.empty() && pq.top() <= cur){
            pq.pop();
        }
        if(pq.empty()) break;
        cur = pq.top();
        pq.pop();
    }
    cout << cur << nl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}