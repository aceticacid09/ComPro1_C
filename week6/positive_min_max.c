#include<stdio.h>
#include<limits.h>
void main(){
   int i=1,n=8;
   int max=INT_MIN;
   int min=INT_MAX;

   while (i<=n){
        int x;
        scanf("%d",&x);
        if(x>0){
            if(x>max){
                max=x;
            }
            if(x<min){
                min=x;
            }
        }
        i+=1;
    }
    printf("%d\n%d\n",max,min);
}
