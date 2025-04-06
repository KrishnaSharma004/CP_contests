#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
using namespace std;
#define ll long long 
#define vint vector<int>
#define vll vector<long long>
#define vchar vector<char>
#define rr(x) x.begin(),x.end()
#define nl endl
#define str string
#define si set<int>
#define floop(i,a,b) for(int i=a;i<=b;++i)
#define sp " "
bool even(int n){
    if(n%2==0) return true;
    else return false;
}

void logic(){
    int n;
    cin >> n;

    if(even(n)){
        cout << "-1" << nl;
    }else{
        cout << n << sp;
        floop(i,2,n){
            cout << i-1 << sp;
        }
        cout << nl;
    }
}

int main(){
    int t;
    cin >>  t;
    while(t--){
        logic();
    }
  
    return 0;
}