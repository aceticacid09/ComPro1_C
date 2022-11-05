#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);

    int num=0,Rcol=(n*2)-2;
    for(int r=0; r<n; r++){
        for(int c=0; c<n*2; c++){
            if(r==0&&c%2==0 || r==n-1&&c%2==0 || c==Rcol ){
                printf("%d", num%10);
                num++;
            } else {
                printf(" ");
            }
        }
        Rcol-=2;
        printf("\n");
    }
}