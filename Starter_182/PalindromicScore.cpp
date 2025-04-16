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
#define floop(i,a,b) for(int i=a;i<b;++i)
#define sp " "
#define mii map<int,int>
#define fauto(i,x) for(char i:x)
#define vpint vector<pair<int,int> >

ll mpl(int a,int b){
    if(a%2 == 0 || b%2==0) return a+b;
    return a+b-1;
}

void logic(){
    int a,b,c;
    cin >> a >> b >> c;
    int hataoA = mpl(b,c);
    int hataoB = mpl(a,c);
    int hataoC = mpl(a,b);

    cout << min(hataoA,min(hataoB,hataoC)) << nl;
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