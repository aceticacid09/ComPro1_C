#include<stdio.h>
void main(){
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if (z>y && y>x){
        printf("%d %d %d",x,y,z);
    } else if (y>z && z>x){
        printf("%d %d %d",x,z,y);
    } else if (x>y && y>z) {
        printf("%d %d %d",z,y,x);
    } else if (y>x && x>z){
        printf("%d %d %d",z,x,y);
    } else if (x>z && z>y){
        printf("%d %d %d",y,z,x);
    }
}
