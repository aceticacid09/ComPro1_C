#include<stdio.h>

void main(){
    int n,k,max=0,top;
    scanf("%d%d",&n,&k);
    int score[n][k],sum[n];
    for(int r=0; r<n; r++){
        sum[r]=0;
    }
    for(int r=0; r<n; r++){
        for(int c=0; c<k; c++){
            scanf("%d", &score[r][c]);
            sum[r]+=score[r][c];
        }
        if(sum[r]>max){
            max = sum[r];
            top = r;
        }
    }
    int count=0;
    for(int r=0; r<n; r++){
        int flag=0;
        for(int c=0; c<k; c++){
            if(score[r][c]>score[top][r]){
                flag=1;
            }
        }
        if(flag==0){
            count++;
        }
    }
    printf("%d\n%d",max,count);
}