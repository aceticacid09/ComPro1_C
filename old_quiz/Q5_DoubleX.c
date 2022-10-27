#include<stdio.h>
void main(){
    int row,col;
    scanf("%d%d",&row,&col);
    char arr[row][col];
//set empty space in array
    for(int r=0; r<row; r++){
        for(int c=0; c<col; c++){
            arr[r][c]=' ';
        }
    }
//first X (*)
    int Lcol1=0,Rcol1=row-1;
    for(int r=0; r<row; r++){
        for(int c=0; c<col; c++){
            if(c==Lcol1){
                arr[r][c]='*';
            }
        }
        Lcol1++;
    }
    for(int r=0; r<row; r++){
        for(int c=0; c<col; c++){
            if(c==Rcol1){
                arr[r][c]='*';
            }
        }
        Rcol1--;
    }
//second X (#)
    int Lcol2=col-row,Rcol2=col-1;
    for(int r=0; r<row; r++){
        for(int c=0; c<col; c++){
            if(c==Lcol2){
                arr[r][c]='#';
            }
        }
        Lcol2++;
    }
    for(int r=0; r<row; r++){
        for(int c=0; c<col; c++){
            if(c==Rcol2){
                arr[r][c]='#';
            }
        }
        Rcol2--;
    }
//output picture
    for(int r=0; r<row; r++){
        for(int c=0; c<col; c++){
            printf("%c",arr[r][c]);
        }
        printf("\n");
    }
//output crossover
    int diff=col-row, row2=row+row;
    if(diff==0){
        printf("%d",(row+col)-1);
    } else if(diff==1 || row2<col || (diff>1&&col%2==0)){
        printf("0");
    } else if(diff>1 && col%2!=0){
        printf("2");
    } 
}