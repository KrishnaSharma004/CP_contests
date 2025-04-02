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

int logic(){
    int n,k;
    cin >> n >> k;

    if(n==1){
        if(k==1) cout << "A" << nl <<"A"<< nl;
        else cout << "A" <<nl<<"C"<<nl;

        return 0;
    }

    if(k<n/2 || k>n){
        cout << "-1" << nl;
        return 0;
    }

    str s="";
    forp(i,n) s+= (i%2==0)?'A':'B';

    str cpy = s;

    int dk = n-k;
    int hatayahua = 0;

    for(int i=0;i<n && hatayahua<dk;i+=2){
        cpy[i] = 'C';
        hatayahua++;
    }

    cout << s << nl << cpy << nl;
    return 0;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;

}