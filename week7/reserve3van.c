#include<stdio.h>
void main(){
    int n,a=0,b=0,c=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        int day;
        scanf("%d",&day);
        if (a<=b && a<=c){
            printf("A\n");
            a+= day;
        } else if (b<=c){
            printf("B\n");
            b+= day;
        } else {
            printf("C\n");
            c+= day;
        }
    }
}
