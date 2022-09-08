#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int nAsterisk = n, nSpace=0;
    for(int row=0; row<n; row++){

        for(int col=0; col<nSpace; col++){
            printf(" ");
        }
        nSpace++;

        for(int col=0; col<nAsterisk; col++){
            printf("%d",nAsterisk);
        }
        nAsterisk--;
        printf("\n");
    }
}
