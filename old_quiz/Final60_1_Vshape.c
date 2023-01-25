#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    
    int num=0,Lcol=0,Rcol=(n*2);
    for(int r=0; r<n+1; r++){
        for(int c=0; c<(n*2)+1; c++){
            if(c==Lcol || c==Rcol){
                printf("%d",num);
            } else if (r==n && c==n){
                printf("%d",n);
            } else {
                printf(" ");
            }
        }
        num++;
        Lcol++;
        Rcol--;
        printf("\n");
    }
}