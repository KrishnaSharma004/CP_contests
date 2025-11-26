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
struct DSU{
    int n;
    vint p;
    DSU(int _n): n(_n),p(n+1){
        iota(as(p),0);
    }
    int find(int x){
        return p[x]==x?x:p[x]=find(p[x]);
    }
    bool unite(int a,int b){
        a=find(a);
        b=find(b);
        if(a==b) return false;
        p[b]=a;
        return true;
    }
};
void logic(){
    int n;
    cin >> n;
    struct E{
        int a,b,w,idx;
    };
    vector<E> edges(n);
    int maxnode=0;
    floop(i,0,n){
        cin >> edges[i].a >> edges[i].b;
        edges[i].w = edges[i].b-edges[i].a;
        edges[i].idx=i+1;
        maxnode=max({maxnode,edges[i].a,edges[i].b});
    }
    sort(as(edges),[&](auto &x,auto &y){
        return x.w > y.w;
    });
    DSU dsu(maxnode);
    vint ans;
    fauto(e,edges){
        if(dsu.unite(e.a,e.b)){
            ans.push_back(e.idx);
        }
    }
    cout << ans.size() << nl;
    floop(i,0,(int)ans.size()){
        cout << ans[i];
        if (i + 1 < (int)ans.size()) cout << " ";
        else cout << nl;
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