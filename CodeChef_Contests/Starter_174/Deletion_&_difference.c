#include <stdio.h>
#include <stdlib.h>


int main() {
	// your code goes here
    int t;scanf("%d",&t);
    while(t--){
        int n ;
        scanf("%d",&n);
        int *arr = (int*)malloc(n*sizeof(int));
        int maxval = 0;
        for(int i =0;i<n ;++i){
            scanf("%d",&arr[i]);
            if(arr[i] > maxval) maxval = arr[i];
        }
        //since Ai is in [0,N] and maxval <= n,we create a freaquency array for 0.. maxval
        int freqsize = maxval +1;
        int *freq = (int*)calloc(freqsize,sizeof(int));
        for(int i=0 ;i< n;++i){
            freq[arr[i]]++;
        }
        int nonzeroodd = 0 ;
        int totalzeropairs = 0 ;
        int zeroesfrominput = freq[0];
        //processs nonzeroe numbers
        for(int v =1;v<freqsize;++v){
            if(freq[v]%2 ==1)
            nonzeroodd++;
            totalzeropairs += freq[v]/2;
        }
        //total zeroes avilable = original + from pairing nonzeroes numbers 
        int totalzeros = zeroesfrominput + totalzeropairs;
        
        //all zeros can be reduced to at most 1 element 
        int finalzeros = (totalzeros>0)?1:0;
        
        int ans = nonzeroodd + finalzeros;
        printf("%d\n",ans);
        
        free(arr);
        free(freq);
        }
        return 0;
}

