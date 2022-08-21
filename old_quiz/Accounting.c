#include<stdio.h>
void main(){
    int type, sum1=0, sum2=0;
    int x=0, count_sum1=0, count_sum2=0;
    while(1){
        scanf("%d",&type);
        if (type==0){
            break;
        }
       scanf("%d",&x);
       if (type==1){
        sum1=sum1+x;
        count_sum1+=1;
       } else if(type==2){
            sum2=sum2+x;
            count_sum2+=1;
       }
    }
    printf("%d %d\n",count_sum1,count_sum2);
    printf("%d %d %d",sum1,sum2,sum1-sum2);
}
