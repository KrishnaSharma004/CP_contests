#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
#define ll long long 
#define vint vector<int>
#define vll vector<long long>
#define vchar vector<char>
#define vbool vector<bool>
#define rr(x) x.begin(),x.end()
#define nl endl
#define str string
#define si set<int>
#define pb(x) push_back(x)
#define ull unsigned long long 
#define floop(x,a,b) for(int x=a;x<=b;++x)
#define sp " "

void logic(){
    int n;
    cin >> n;

    vint pop(n+1);
    floop(i,1,n)  cin >> pop[i];


    vint dk(n+1);
    floop(i,1,n)  cin >> dk[i];



    vll comparekaro(n+1,0);
    vbool haikya(n+1,false);
    vint cSize ;
    
    cSize.pb(0);

    int cD = 0;
    floop(i,1,n){
        if(!haikya[i]){
            cD++;
            int current = i;
            int sssiz = 0;
            while(!haikya[current]){
                haikya[current] = true;
                comparekaro[current] = cD;
                sssiz++;
                current = pop[current];
            }
            cSize.pb(sssiz);
        }
    }

    vbool tuttahua(cD+1,false);
    int jawab=0;

    floop(i,1,n){
        int position = dk[i];
        int njr = comparekaro[position];
        if(!tuttahua[njr]){
            tuttahua[njr] = true;
            jawab+=cSize[njr];

        }
        cout << jawab << sp;
    }
    cout << nl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}

