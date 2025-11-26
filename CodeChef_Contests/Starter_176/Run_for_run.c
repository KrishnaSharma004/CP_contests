#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    //calculate the number of stops 
    int stops = y/x;
    //if chef finishes exactly at a rest point,he dosen't stop at the finish line
    if(y%x==0 && stops>0){
        stops -=1;
    }
    printf("%d",stops);
    return 0;
}