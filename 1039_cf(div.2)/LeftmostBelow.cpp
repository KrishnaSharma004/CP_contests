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
bool checkbad(const deque<int>&qtail,int val){
    if(qtail.size()<4) return false;

    vint v;
    v.reserve(5);
    for(int x:qtail){
        v.push_back(x);
    }
    v.push_back(val);

    bool inc=1;
    bool dec=1;
    for(size_t i=0;i<4;++i){
        if(v[i]>=v[i+1] ) inc=false;
        if(v[i]<=v[i+1] ) dec=false;
    }
    return inc || dec;
}
void logic(){
    int n;
    cin >> n;
    vll a(n);
    fauto(x,a) cin >> x;
    ll mn=a[0];
    bool chk=1;
    if(mn==0){
        fauto(x,a) if(x!=0) chk=false;
    }else{
        for(int i=1;i<n&&chk;++i){
            if(mn==0){
                if(a[i]!=0) chk =0;
            }else if(a[i]>2*mn-1){
                chk=0;
            }
            mn=min(mn,a[i]);
        }
    }
    if(chk) cout << "Yes" << nl;
    else cout << "No" << nl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}