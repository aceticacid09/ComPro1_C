#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    char arr[n][n];
    int mid = n/2, lcol=0, rcol=n-1;

    for(int row=0; row<n; row++){
        for(int col=0; col<n; col++){
            arr[row][col]=' ';
        }
    }
//+ in the middle
    for(int row=0; row<n; row++){
        for(int col=0; col<n; col++){
            if(row==mid || col==mid){
               arr[row][col]='*'; 
            }  
        }
    }
// x in the middle
    for(int row=0; row<n; row++){
        for(int col=0; col<n; col++){
            if(col==lcol){
               arr[row][col]='*'; 
            }  
        }
        lcol++;
    }
    for(int row=0; row<n; row++){
        for(int col=0; col<n; col++){
            if(col==rcol){
               arr[row][col]='*'; 
            }  
        }
        rcol--;
    }

//output
    for(int row=0; row<n; row++){
        for(int col=0; col<n; col++){
            printf("%c",arr[row][col]);
        }
        printf("\n");
    }
}