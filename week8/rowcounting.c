#include <stdio.h>
void main(){
    int r,c,sum,count=1;
    scanf("%d%d",&r,&c);
    sum = r*c;

    if(count<sum){
        for(int row=1; row<=r; row++){
            for(int col=1; col<=c; col++){
                printf("%d ",count);
                count+=1;
            }
            printf("\n");
        }
    }

}
