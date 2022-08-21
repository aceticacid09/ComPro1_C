#include<stdio.h>
void main(){
    int x,y;
    scanf("%d%d",&x,&y);
    if (x<=y){
     while (x<=y){
        printf("%d ",x);
        x+=1;
     }
    }else{
        printf("Invalid input");
    }
}
