#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
//output
    int num=n;
    for(int r=0; r<n; r++){
        for(int c=0; c<(n*2)-1; c++){
//check that it is left most, rigth most, and left cross col or not.
            if(c==0 || c==(n*2)-2 || c==r*2){  
                printf("%d", (num+c)%10);
//if not, print empty space instead.
            } else {
                printf(" ");
            }
        }
        num--;
        printf("\n");
    }
}