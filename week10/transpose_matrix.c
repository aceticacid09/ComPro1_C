#include<stdio.h>
void main(){
    int row,col;
    scanf("%d%d",&row,&col);
    int a[row][col];

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }


}
