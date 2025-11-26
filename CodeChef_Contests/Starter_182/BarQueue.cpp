#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <map>
#include <cstring>
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
#define floop(i,a,b) for(i=a;i<b;++i)
#define sp " "
#define mii map<int,int>
#define fauto(i,x) for(char i:x)
#define vpint vector<pair<int,int> >

void logic(){
    int n;
    string s;
    cin >> n ;
    cin >> s;
    int enter = 0;
    int boys = 0, girls = 0;
    int i;
    floop(i,0,n){
        if ( s[i] == 'B') boys++;
        else if (s[i] == 'G') girls++;
        enter++;
        if(boys > 2 * girls){
            break;
        }
    }
    cout << enter << nl;
    return ;
    
}
int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}

