#include<stdio.h>

void main(){
    int n;
    scanf("%d",&n);
    char arr[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            arr[i][j]='*';
        }
    }
    // for(int row=0; row<n; row++){
    //     for(int col=0; col<n; col++){
    //         if(row==0 || row==n-1 || col==0 || col==n-1){
    //             printf("*"); 
    //         } else {
    //             printf(" ");
    //         }
    //     }
    //     printf("\n"); 
    // }
    
    //upper triangle 
    for(int row=1; row<=11; row++){
        for(int col=3+row; col<=11; col++){
            arr[row][col]=' ';
        }
    }
    for(int row=1; row<=11; row++){
        for(int col=17; col<=25-row; col++){
            arr[row][col]=' ';
        }
    }

    //lower triangle 
    int ncol=0;
    for(int row=1; row<11; row++){
        for(int col=1; col<ncol; col++){
            arr[row][col]=' ';
        }
        ncol++;
    }
    
    for(int row=3; row<11; row++){
        for(int col=n-1; col>=20; col--){
            arr[row][col]=' ';
        }
        
    }

    for(int row=0; row<n; row++){
        for(int col=0; col<n; col++){
            printf("%c",arr[row][col]);
        }
        printf("\n");
    }

}