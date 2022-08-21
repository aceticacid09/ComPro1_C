#include<stdio.h>
void main(){
    float x,y,z;
    scanf("%f%f%f",&x,&y,&z); //scanf("%lf%lf%lf",&x,&y,&z)
    if (z==0){
        printf("cannot divide by zero");
    } else {
        printf("%f",(x+y)/z); //printf("%.3lf",(x+y)/z)
    }
}
