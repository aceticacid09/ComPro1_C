#include<stdio.h>
void main(){
    int x;
    int i=1;
    scanf("%d",&x);
    if(x<=0){
        printf("Invalid input");
    }else{
        while (i<=x){
            printf("%d\n",i);
            i+=1;
        }
    }

}
