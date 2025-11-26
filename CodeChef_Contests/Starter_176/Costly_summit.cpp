#include <iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
using namespace std;
void solve(){
    int n,c;
    cin >>n>>c;
    string s;
    cin >>s;
    
    unordered_map<char,vector<int> > lang_positions;
    for(int i=0;i<n;++i){
        lang_positions[s[i]].push_back(i);
    }
    
    vector<char> unique_languages;
    for(auto &entry : lang_positions){
        unique_languages.push_back(entry.first);
    }
    
    int min_cost = INT_MAX;
    int total_languages = unique_languages.size();
    int total_marks = (1 << total_languages);
    
    for(int mask=0;mask < total_marks ;++mask){
        unordered_set<int> covered_positions;
        int learn_cost =0;
        
        for(int i=0;i<total_languages;++i){
            if(mask&(1<<i)){
                learn_cost+=c;
                covered_positions.insert(lang_positions[unique_languages[i]].begin(),lang_positions[unique_languages[i]].end());
            }
        }
        int translator_cost = 0;
        int translator_uses =0;
        for(int i=0;i<n;++i){
            if(covered_positions.find(i)==covered_positions.end()){
                translator_uses++;
                translator_cost +=translator_uses;
            }
        }
        min_cost=min(min_cost,learn_cost+translator_cost);
    }
    
    cout << min_cost <<endl;
}

int main() {
	// your code goes here
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t;
	cin >> t;
	while(t--){
	    solve();
	}
	return 0;
	

}
