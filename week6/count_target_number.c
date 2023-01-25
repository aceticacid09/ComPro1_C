#include<stdio.h>
void main(){
    int target,n=0;
    scanf("%d",&target);
    while(1){
        int x;
        scanf("%d",&x);
        if (x==0){
            break;
        }
        if(x==target){
            n+=1;
        }
    }
    if (n==0){
        printf("None");
    }else{
        printf("%d",n);
    }
}
