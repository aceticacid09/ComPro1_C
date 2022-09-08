#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);

    for(int row=0; row<n; row++){
        for(int col=0; col<n; col++){
            if((row==1 && col!=0 && col!=n-1) || (row==n-2 && col!=0 && col!=n-1)){
                printf(" ");
            }
            else if((col==1 && row!=0 && row!=n-1) || (col==n-2 && row!=0 && row!=n-1)){
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
}
