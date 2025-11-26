#include <iostream>
#include <vector>
using namespace std;
#define vll vector<long long>

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        vll arr(n);//taken long long cuz of constraint
        for(int i=0;i<n;++i){
            cin >> arr[i];
        }//input taken till now
        //main logic begins from here !!
        int l=0;//arr[0] kitni baar aa raha hai prefix mai uska count rakega
        int s = 0;
        int m_D = INT_MAX;
        int cnt = 0;
        
        for(int i=0;i<n;++i){
            if(i==0){
                l=1;
            }else if(arr[i]==arr[0]){
                l++;
            }
            
            int length = 1+i;//abhi ki prefix length
            int difference = 2*l-length;
            
            m_D = min(m_D,difference);
            
            //what is the seen of suffix(suffix condition)
            if(m_D > 0 && difference > s) cnt++;
            
            s = max(s,difference);
        }
        cout << cnt << endl;
    }
    return 0;

}
