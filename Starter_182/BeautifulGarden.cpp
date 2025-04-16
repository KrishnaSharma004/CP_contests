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
int cpm(const void*x,const void*y){
    return (*(int*)x - *(int*)y);
}

void logic(){
    int n,k,d;
    cin >> n >> k >> d;
    int *ptr = (int*)malloc(n*sizeof(int));
    floop(i,0,n){
        cin >> ptr[i];
    }
    qsort(ptr,n,sizeof(int),cpm);
    ll tp = 0;
    int x = n-k;
    if(x<0){
        x=0;
    }
    floop(i,0,x){
        tp += ((d-1)/ptr[i])+1;
    }

    cout << tp << nl;
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