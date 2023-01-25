#include<stdio.h>
void main(){
    int x,y;
    int be=0,less=0,more=0;
    scanf("%d%d",&x,&y);
    while(1){
        int n;
        scanf("%d",&n);
        if (n==0){
            break;
        } else if (n>x && n<y){
            be+=1;
        } else if (n<x && n>y){
            be+=1;
        } else if (n<x && n<y){
            less+=1;
        } else if (n>x && n>y){
            more+=1;
        }
    }
    printf("%d\n%d\n%d",be,less,more);
}
