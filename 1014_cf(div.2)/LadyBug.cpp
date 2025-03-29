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
        ll n;
        cin >> n;
        str a,b;
        cin >> a;
        cin >> b;
        i onekacomp = 0,onekacomp1 =0;
        for(i j=0;j<n;++j){
            i pps = j+1;
            if(pps%2 == 1){
                if(a[j]=='1') onekacomp++;
            }else{
                if(a[j]=='1') onekacomp1++;
            }
        }
        for(i j=0;j<n;++j){
            i ssp = j+1;
            if(ssp%2 == 1){
                if(b[j]=='1') onekacomp1++;
            }else{
                if(b[j]=='1') onekacomp++;
            }
        }
        i shamtacomp = n/2;
        i shamtacomp1 = n-(n/2);

        if(onekacomp <= shamtacomp && onekacomp1 <= shamtacomp1){
            cout << "YES" << nl;
        }else{
            cout << "NO" << nl;
        }


    }
    return 0;
}