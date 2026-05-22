#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pp pop_back
#define all(x) x.begin(), x.end()
#define vi vector<int> 
#define vll vector<ll> 
#define vb vector<bool> 
#define vch vector<char>
#define si set<int> 
#define sch set<char> 
#define sll set<ll> 
#define mpii map<int, int> 
#define mpll map<ll, ll> 
#define mpli map<ll, int> 
#define mpil map<int, ll> 
#define vpii vector<pair<int, int>>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define floopinc(i,x,y) for(int i = x; i < y ; ++i)
#define floopdec(i,x,y) for(int i = x; i >= y ; --i)
#define fauto(i,x) for(auto &i : x)
typedef long long ll;
void yn(bool condition){if(condition){yes;}else{no;}}
void ny(bool condition) { yn(!condition);}
int gcd (int a, int b) { if (b == 0) return a;else return gcd (b, a % b);}
int lcm (int a, int b) {return a / gcd(a, b) * b;}
void copyvector(vector<int> &a, vector<int> &res){
    floopinc(i,0,a.size()){res[i] = a[i];}}
int lower_bound(vector<int> &a, int target){int lo = 0, hi = a.size() - 1;
    while(hi-lo > 0){
        int mid = (lo+hi)/2;
        if(a[mid] == target) return mid;if(a[mid] > target) hi = mid;else lo = mid + 1;
    }if(a[lo] >= target) return lo;else return a.size();
}  

void krishna(){
    int n;
    cin >> n;
    vi a(n);
    fauto(i,a) cin >> i;
    bool chk = true;
    floopinc(i,0,n-1){
        if(a[i] > a[i + 1]) chk = false;
    }
    if(chk) cout << "YES" << '\n';
    else{
        bool ok = true;
        int mx_dif = -1;
        floopinc(i,1,n){
            mx_dif = max(a[i-1]-a[i], mx_dif);
        }
        floopinc(i,1,n){
            if(a[i] < a[i-1]){
                if(a[i-1] - a[i] > mx_dif){
                    ok = false;
                    break;
                }
                else{
                    a[i] += mx_dif;
                }
            }
        }
        if(!ok){
            cout << "NO" << '\n';
        }else{
            cout << "YES" << '\n';
        }
    }
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)  
    krishna();
    return 0;
}
