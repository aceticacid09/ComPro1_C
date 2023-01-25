#include<stdio.h>
void main(){
    int k,x,countx=0,countn=0,sum=0;
    scanf("%d",&k);
    while(1){
        scanf("%d",&x);
        if(x==0){
            break;
        }
        countx++;
        if(x>0 && x%k==0){
           countn++;
           sum = sum+x;
        }
    }
    printf("%d\n%d\n%d",countx,countn,sum);
}
