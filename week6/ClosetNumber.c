#include<stdio.h>
#include<limits.h>
void main(){
    int target,i=1,n=8;
    int minDiff=INT_MAX,minDiff_x;
    scanf("%d",&target);
    while (i<=n){
        int x;
        scanf("%d",&x);
        int diff = x-target;
        if(diff<0){
            diff = -1*diff;
        }
        if(diff<minDiff){
            minDiff = diff;
            minDiff_x = x;
        }
        i+=1;
    }
    printf("%d",minDiff_x);
}
