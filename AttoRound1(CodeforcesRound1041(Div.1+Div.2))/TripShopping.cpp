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
void logic(){
    int size, boost;
        cin >> size >> boost;
        vint alpha(size), beta(size);
        floop(i,0,size) cin >> alpha[i];
        floop(i,0,size) cin >> beta[i];

        ll totalCost = 0;
        vpint ranges;
        floop(i,0,size){
            totalCost += abs(alpha[i] - beta[i]);
            int left = min(alpha[i], beta[i]);
            int right = max(alpha[i], beta[i]);
            ranges.emplace_back(left, right);
        }

        sort(ranges.begin(), ranges.end());

        int currentMax = ranges[0].second;
        int smallestGap = INT_MAX;
        floop(i,1,size){
            int left = ranges[i].first;
            int right = ranges[i].second;

            if(left <= currentMax){
                smallestGap = 0;
            }else{
                smallestGap = min(smallestGap, left - currentMax);
            }
            currentMax = max(currentMax, right);
        }

        ll bonus = (smallestGap == 0 || boost == 0) ? 0 : 2LL * smallestGap;
        cout << totalCost + bonus << nl;
}
int main() {
    int testCases;
    cin >> testCases;
    while (testCases--) {
        logic();
    }
    return 0;
}
