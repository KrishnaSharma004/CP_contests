#include<iostream>
using namespace std;

bool pow_two(int x){
    return (x&(x-1))==0;
}
void solution(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;

        if(pow_two(x)|| pow_two(1+x)){
            cout <<"-1"<<endl;
            continue;
        }

        int b;
        while(b*2<x){
            b*=2;
        }
        int c=b-1;
        cout << c << endl;
    }
}
int main(){
    ios :: sync_with_stdio(false);
    cin.tie(0);
    solution();
    return 0;
}