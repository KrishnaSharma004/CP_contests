#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define ll long long 
#define vint vector<int>
#define vchar vector<char>
#define rr(x) x.begin(),x.end()
#define i int
#define nl endl
#define str string

i main(){
    i T;
    cin >> T;
    while(T--){
        i n;
        cin >> n;

        ll summation = 0;
        ll countodds = 0;
        ll sabsebadivalue = 0;

        vint a(n);
        for(i j=0;j<n;++j){
            cin >> a[j];
            summation += a[j];
            if(a[j] % 2 != 0) countodds++;
            if(a[j] > sabsebadivalue) sabsebadivalue = a[j];
        }

        if(countodds == n || countodds == 0){
            cout << sabsebadivalue << nl;
        }else{
            ll akhirians = summation - (countodds - 1);
            cout << akhirians << nl;
        }
    }
    return 0;
}