#include<stdio.h>
void main(){
    int target,consec=0,max_consec=0,n=0;
    scanf("%d",&target);
    while(1){
        int x;
        scanf("%d",&x);
        if (x==0){
            break;
        }
        if(x==target){
            consec+=1;
            if(consec>max_consec){
                max_consec=consec;
            }
            n+=1;
        } else {
            consec=0;
        }
    }
        printf("%d\n%d",max_consec,n);
}
