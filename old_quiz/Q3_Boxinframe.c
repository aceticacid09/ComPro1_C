#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    //zone1
    for(int i=0; i<n; i++){
        printf("*");
    }
    printf("\n");

    //zone2
    printf("*");
    for(int i=1; i<n-1; i++){
        printf(" ");
    }
    printf("*\n");

    //zone3
    for(int j=2; j<n-2; j++){
        printf("* ");
        for(int i=2; i<n-2; i++){
            printf("*");
        }
        printf(" *\n");
    }
    //zone4
    printf("*");
        for(int i=1; i<n-1; i++){
            printf(" ");
        }
    printf("*\n");

    //zone5
    for(int i=0; i<n; i++){
        printf("*");
    }
    printf("\n");
}
