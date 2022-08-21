#include<stdio.h>
void main(){
   int i=1,n=8;
   int sum_even=0;
   int sum_odd=0;

   while (i<=n){
        int x;
        scanf("%d",&x);
        if(x%2==0){
           sum_even+=x;
        }else{
            sum_odd+=x;
        }
        i+=1;
    }
    if (sum_even>sum_odd){
        printf("even\n");
    }else if(sum_odd>sum_even){
        printf("odd\n");
    }else{
        printf("equal\n");
    }
    printf("%d\n%d",sum_even,sum_odd);
}

