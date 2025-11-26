#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define ll long long 
#define vint vector<int>
#define vll vector<long long>
#define vchar vector<char>
#define rr(x) x.begin(),x.end()
#define nl endl
#define str string
#define si set<int>
#define pb(x) push_back(x)
#define sp " "
#define MODD 998244353
#define forp(a,b) for(int a=0;a<b;++a)
#define forp2(a,b) for(int a=0;a<b;a+=2)
int odd(int a){
    if(a%2==1) return 1;
    else return 0;
}

int main(){
    vint ser;
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >>n;

    vint a(n);
    forp(i,n) cin >> a[i];

    if(n==1){
        ser.pb(a[0]);
        continue;
    }

    int kri = (n-1)/2;
    int njr = *max_element(rr(a));

    bool check = false;
    forp2(i,n){
        if(a[i]==njr){
            check = true;
            break;
        }
    }

    int extraMal;
    if(check) extraMal=kri;
    else extraMal = (kri - 1>=0)?kri-1:0;

    ser.pb(njr+extraMal);

    
}
for(int i=0;i<ser.size();++i) cout << ser[i] << nl;
return 0;

}