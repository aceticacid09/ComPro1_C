#include <stdio.h>
void main(){
    while(1){
        int n;
        scanf("%d",&n);
        if (n<=0){
            break;
        }
        for(int col=0; col<n; col++){
            printf("*");
        }
        printf("\n");
    }
}
