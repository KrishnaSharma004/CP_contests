#include <iostream>
#include <string>
using namespace std;

//check if a string is all'z'
bool allZ(const string &s){
    for(char c:s){
        if(c !='z')
        return false;
    }
    return true;
}
//increment the half string L (of length len) as a base number 
//return true if increment was possible,false if L is all 'z'string
bool incrementHalf(string &L){
    int len = L.size();
    for(int i=len-1;i>=0;--i){
        if(L[i]<'z'){
            L[i]++;
            for(int j = i+1;j<len;++j){
                L[j] = 'a';
            }
            return true;
        }
    }
    return false ;
}
//construct a palindrome of length n from the half sting length
//(L is of length(n+1)/2)
void makePalindrome(const string &L,int n,string &pal){
    int half = (n+1)/2;
    pal = L;
    int startMirror = (n%2 ==0)?half-1:half-2;
    for(int i= startMirror;i>=0;--i){
        pal +=L[i];
    }
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string A;
	    cin >> A;
	    
	    if(allZ(A)){
	        cout <<"-1\n";
	        continue;
	    }
	    
	    int half=(n+1)/2;
	    string L = A.substr(0,half);
	    string candidate;
	    makePalindrome(L,n,candidate);
	    
	    if(candidate <= A){
	        if(!incrementHalf(L)){
	            cout << "-1\n";
	        }
	        makePalindrome(L,n,candidate);
	    }
	    cout << candidate << endl;
	}
    return 0;
}
