#include<stdio.h>
void main(){
    int score;
    scanf("%d",&score);
    if (score>=80){
        printf("Excellent");
    } else if (score>=40) {
        printf("Pass");
    } else {
        printf("Fail");
    }
}
