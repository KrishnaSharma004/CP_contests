#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define vi vector<int>
#define all(x) x.begin(),x.end()
int main(){
    int T;
    cin >>T;
    while(T--){
        int n;
        cin >> n;

        vi beauty_sheep(n);
        for(int i = 0 ;i<n;++i){
            cin >> beauty_sheep[i];
        }//Input take till now !!
        // Now the main logic begins from here :->

        int badi_value = *max_element(all(beauty_sheep));

        int choti_value = *min_element(all(beauty_sheep));

        int pleasure = badi_value - choti_value;

        cout << pleasure << endl;


    }
    return 0;
}