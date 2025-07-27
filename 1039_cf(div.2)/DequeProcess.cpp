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
    vint p(n);
    floop(i,0,n) cin >> p[i];

    int l=0,r=n-1;
    deque<int> qtail;
    str ans = "";

    while(l<=r){
        int lval =p[l];
        int rval = p[r];

        bool lok = !checkbad(qtail,lval);
        bool rok = !checkbad(qtail,rval);

        char c;
        if(lok && rok){
            if(l==r) c = 'L';
            else{
                deque<int> qal=qtail;
                qal.push_back(lval);
                if(qal.size()>4) qal.pop_front();

                bool lps = 0;
                if(l+1==r){
                    if(!checkbad(qal,p[r])) lps = true;
                }else{
                    if(!checkbad(qal,p[l+1]) || !checkbad(qal,p[r])){
                        lps=true;
                    }
                }

                deque<int> qar=qtail;
                qar.push_back(rval);
                if(qar.size()>4) qar.pop_front();

                bool rps = 0;
                if(l+1==r){
                    if(!checkbad(qar,p[r])) rps = true;
                }else{
                    if(!checkbad(qar,p[l+1]) || !checkbad(qar,p[r])){
                        rps=true;
                    }
                }
                if(lps && rps){
                    c='L';
                }else if(!lps && rps){
                    c='R';
                }else{
                    if(lval < rval){
                        c='L';
                    }else{
                        c='R';
                    }
                }
            }
        }else if(lok){
            c='L';
        }else{
            c='R';
        }
        if(c=='L'){
            ans+='L';
            qtail.push_back(lval);
            if(qtail.size()>4) qtail.pop_front();
            l++;
        }else{
            ans+='R';
            qtail.push_back(rval);
            if(qtail.size()>4) qtail.pop_front();
            r--;
        }
    }
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