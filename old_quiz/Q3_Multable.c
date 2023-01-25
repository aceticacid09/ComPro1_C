#include<stdio.h>
void main(){
    int mul0,mul_start,mul1,mul_end;
    scanf("%d%d%d%d",&mul0,&mul_start,&mul1,&mul_end);

    for(int row=mul_start; row<=mul_end; row++){
        printf("%d x %d = %d",mul0,row,mul0*row);
        printf("\n");
    }
    //for(int row=)
}
