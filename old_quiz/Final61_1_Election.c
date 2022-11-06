#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);

    char arr[n][n];
    for(int r=0; r<n; r++){
        for(int c=0; c<n; c++){
            arr[r][c]=' ';
        }
    }

    int Lcol=0,Rcol=n-1;
    for(int r=0; r<n; r++){
        for(int c=0; c<n; c++){
            if(r==0 || r==n-1 || c==0 || c==n-1 || c==Lcol || c==Rcol){
                arr[r][c]='*';
            }
        }
        Lcol++;
        Rcol--;
    }

    for(int r=0; r<n; r++){
        for(int c=0; c<n; c++){
            printf("%c",arr[r][c]);
        }
        printf("\n");
    }
}