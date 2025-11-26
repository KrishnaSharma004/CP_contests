#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int compare(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    return y - x; // Descending order
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Sort using qsort (retained from original code for similarity)
        qsort(&a[0], n, sizeof(int), compare);

        int t = 0;
        int cnt = 0;

        for (int i = 0; i < n; ++i) {
            cnt++;
            if (cnt * a[i] >= x) {
                t++;
                cnt = 0;
            }
        }
        cout << t << endl;
    }
    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>

// int c_d(const void*a,const void*b){
//     int x=*(const int*)a;
//     int y=*(const int*)b;
//     return y-x;
// }

// int main(){
//     int t;
//     scanf("%d",&t);
//     while(t--){
//         int n,x;
//         scanf("%d %d",&n,&x);
//         int *a = (int*)malloc(n*sizeof(int));
//         for(int i=0;i<n;++i){
//             scanf("%d",&a[i]);
//         }
//         qsort(a,n,sizeof(int),c_d);

//         int t=0;
//         int cnt =0;

//         for(int i=0;i<n;++i){
//             cnt++;
//             if(cnt*a[i] >= x){
//                 t++;
//                 cnt = 0;
//             }
//         }
//         printf("%d\n",t);
//         free(a);
//     }
//     return 0;
// }



// #include <iostream>
// #include <vector>
// using namespace std;
// typedef long long ll;


// void solve(){
//     int n,x;
//     cin >>n >>x;
//     vector<int> a(n);
//     for(int i=0;i<n;++i){
//         cin >> a[i];
//     }

//     sort(a.rbegin() , a.rend());

//     int t = 0;
//     int m = 0;
//     int min_s = INT_MAX;

//     for(int s:a){
//         m++;
//         min_s = min(min_s,s);

//         if(m*min_s >= x){
//             t++;
//             m =0;
//             min_s = INT_MAX;
//         } 
//     }
//     cout << t << endl;
// }

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }