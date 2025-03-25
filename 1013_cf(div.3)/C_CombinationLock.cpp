#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n % 2 == 0){
            cout << "-1" << endl;
        }else{
            for(int j = 1; j <= n; j++){
                int val = (2 * (j - 1)) % n + 1;
                cout << val;
                if (j < n) cout << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(){
//     int t;
//     scanf("%d",&t);
//     while(t--){
//     int n;
//     scanf("%d",&n);
//     if(n%2==0){
//         printf("-1\n");
//     }else{
//         for(int j=1;j<=n;j++){
//             int val = (2*(j-1))%n+1;
//             printf("%d",val);
//             if(j<n) printf(" ");
//         }
//         printf("\n");
//     }
// }
//     return 0;
// }