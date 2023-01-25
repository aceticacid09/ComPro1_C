#include<stdio.h>
void main(){
    int x;
    scanf("%d",&x);
    if(x<1 || x>99){
        printf("Number is out of range");
    }else {
        for(int i =1; i<=12; i++){
            int mul = x*i;
            if (x>=84){
                printf("%d x %2d = %4d\n",x,i,mul);
            } else {
                printf("%d x %2d = %3d\n",x,i,mul);
            }
        }
    }

}
