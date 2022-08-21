#include<stdio.h>
void main(){
    int target,consec=1,max_consec=1;
    scanf("%d",&target);
    int max_target = target;
    while(1){
        int x;
        scanf("%d",&x);
        if (x==0){
            break;
        }
        if(x==target){
            consec+=1;
            if (consec>max_consec){
                max_consec=consec;
                max_target=target;
            }
        } else {
            consec=1;
        }
        target=x;
    }
        printf("%d\n%d",max_consec,max_target);
}
