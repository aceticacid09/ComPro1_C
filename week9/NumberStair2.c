#include<stdio.h>
void main(){
    int a[501],n=0;
    while(1){
        int x;
        scanf("%d",&x);
        if(x<0 || x>9){
            break;
        }
        a[n] = x;
        n++;
    }

    int nAsterisk=1,space=n-1;

    for(int row=0; row<n; row++){
        for(int col=0; col<space; col++){
            printf(" ");
        }
        space--;

        for(int col=0; col<nAsterisk; col++){
            printf("%d",a[row]);
        }

        nAsterisk++;
        printf("\n");
    }


}
