#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);

    int num=0,Lcol=0,Rcol,mid=n/2,col;
    if(n%2==0){
        Rcol=n;
        col=n+1;
    } else {
        Rcol=n-1;
        col=n;
    }

    for(int r=0; r<n+1; r++){
        for(int c=0; c<col; c++){
            if(c==Lcol&&r<mid || c==Rcol&&r<mid){
                printf("%d",num);
            } else if(r>=mid && c==mid){
                printf("%d",num);
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