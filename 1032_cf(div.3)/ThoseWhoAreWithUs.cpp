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

void logic(){
    int n,m;
    cin >> n >> m;
    vvint a(n,vint(m));

    int glb_max = 0;
    vint row_mx(n,0),clm_mx(m,0);
    mii freq;

    floop(i,0,n){
        floop(j,0,m){
            cin >> a[i][j];
            glb_max = max(glb_max,a[i][j]);
            clm_mx[j] = max(clm_mx[j],a[i][j]);
            row_mx[i] = max(row_mx[i],a[i][j]);
            freq[a[i][j]]++;
        }
    }
    int scnd_mx = 0;
    for(auto& [val,count] : freq){
        if(val != glb_max){
            scnd_mx = max(scnd_mx,val);
        }
    }
    vint row_gmx(n,0),clm_gmx(m,0);
    floop(i,0,n){
        floop(j,0,m){
            if(a[i][j]==glb_max){
                row_gmx[i]++;
                clm_gmx[j]++;
            }
        }
    }

    int result = INT_MAX;
    floop(i,0,n){
        floop(j,0,m){
            int new_gmx;
            bool check = (row_gmx[i]+clm_gmx[j]-(a[i][j] == glb_max ? 1:0))==freq[glb_max];

            if(check){
                new_gmx = max(scnd_mx,max(row_mx[i],clm_mx[j])-1);
            }else{
                new_gmx = max(glb_max,max(row_mx[i],clm_mx[j])-1);
            }
            result = min(result,new_gmx);
        }
    }
    cout << result << nl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
}