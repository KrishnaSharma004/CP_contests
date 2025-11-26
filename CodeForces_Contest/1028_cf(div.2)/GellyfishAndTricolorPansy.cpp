#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <map>
#include <cstring>
#include <unordered_map>
#include <deque>
using namespace std;
#define ll long long 
#define vint vector<int>
#define vll vector<long long>
#define vchar vector<char>
#define vstr vector<string>
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
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a<d && b<= c){
        if(b<=a){
            cout << "Gellyfish" << nl;
        }else{
            cout << "Flower" << nl;
        }
    }
    else if(a>=d && b<=c){
        cout << "Gellyfish" <<nl;
    }else if(a<d && b>=c+1){
        cout << "Flower" << nl;
    }else{
        if(d<=c){
            cout << "Gellyfish" <<nl;
        }else{
            cout << "Flower" << nl;
        }
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