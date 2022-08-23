#include<stdio.h>
void main(){
    int M,N,data[100][100];
    int row,col;
    scanf("%d%d",&M,&N);
    
    for(int row=1; row<=M; row++){
        for(int col=1; col<=N; col++){
            scanf("%d",&data[row][col]);
        }
    }
    
    int k[1],i;
    scanf("%d",&k[i]);
    
    for(int row=1; row<=M; row++){
        for(int col=1; col<=N; col++){
            //printf("%d ",data[row][col]+k[i]);
        }
        printf("\n");
    }
    
}