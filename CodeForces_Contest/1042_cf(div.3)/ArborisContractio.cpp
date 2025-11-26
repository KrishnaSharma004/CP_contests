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

void dfs(int node, int parent, const vvint &graph, const vint &degree, vint &subtree_size, vint &leaf_count, vll &operations) {
    subtree_size[node] = 1;
    leaf_count[node] = (degree[node] == 1);
    operations[node] = 0;

    floop(i,0,graph[node].size()) {
        int child = graph[node][i];
        if (child == parent) continue;

        dfs(child, node, graph, degree, subtree_size, leaf_count, operations);
        subtree_size[node] += subtree_size[child];
        leaf_count[node] += leaf_count[child];

        if (subtree_size[child] > 1) {
            operations[node] += leaf_count[child];
        }
    }
}

void process_tree() {
    int n;
    cin >> n;

    vvint graph(n + 1);
    vint degree(n + 1, 0);

    floop(i,0,n-1) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);  // use push_back directly
        graph[v].push_back(u);
        degree[u]++;
        degree[v]++;
    }

    bool is_star = false;
    floop(i,1,n+1) {
        if (degree[i] == n - 1) {
            is_star = true;
            break;
        }
    }

    if (is_star) {
        cout << 0 << nl;
        return;
    }

    vint subtree_size(n + 1, 0);
    vint leaf_count(n + 1, 0);
    vll operations(n + 1, 0);

    dfs(1, 0, graph, degree, subtree_size, leaf_count, operations);

    ll total_leaves = leaf_count[1];
    ll min_operations = -1;

    floop(i,1,n+1){
        ll current_ops = operations[i];

        if (i != 1) {
            ll parent_size = n - subtree_size[i];
            if (parent_size > 1) {
                current_ops += (total_leaves - leaf_count[i]);
            }
        }

        if (min_operations == -1 || current_ops < min_operations) {
            min_operations = current_ops;
        }
    }

    cout << min_operations << nl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        process_tree();
    }

    return 0;
}
