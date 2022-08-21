#include<stdio.h>
void main(){
    int k,n,sum_order=0;
    scanf("%d%d",&k,&n);
    int ppd =k*100;
    for(int i=1;i<=n;i++){
        int order;
        scanf("%d",&order);
        sum_order+=order;

        int day = sum_order/ppd;

        if (sum_order%ppd>0){
            day +=1;
        }

        printf("%d\n", day);
    }
}
