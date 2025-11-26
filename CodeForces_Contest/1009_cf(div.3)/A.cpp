#include<iostream>
using namespace std;

bool issqr(int l,int n,int b,int x){
    //check axis symmetry
    if(l!=n || b!=x) return false;
    //ensure equal distance from origin 
    return (l==b);
}
int main(){
    ios :: sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >>t;
    while(t--){
        int l,n,b,x;
        cin >>l>>n>>b>>x;
        cout <<(issqr(l,n,b,x)?"YES":"No")<<endl;
    }
    return 0;
}