#include<stdio.h>
void main(){
    int M,N;
    int row,col;
    scanf("%d%d",&M,&N);
    int data[M][N];
    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            data[i][j]=0;
        }
    }
    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            scanf("%d",&data[i][j]);
        }
    }
    int k;
    scanf("%d",&k);

    for(int i=0; i<M; i+=1){
        for(int j=0; j<N; j+=1){
            if((i%2!=0&&j%2==0) || (i%2==0&&j%2!=0)){  //if((i+j)%2!=0)
                data[i][j]+=k;
            }
        }
    }

    for(int row=0; row<M; row++){
        for(int col=0; col<N; col++){
            printf("%d ",data[row][col]);
        }
        printf("\n");
    }
}
